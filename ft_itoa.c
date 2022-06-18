/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:34:52 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/18 20:30:39 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	decimal_count(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_power(int n, int pwr)
{
	int	result;

	result = 1;
	while (pwr--)
		result *= n;
	return (result);
}

char	*alloc_and_values(int *n, int *i, int *dec)
{
	char	*number;

	if (!*n)
		*dec = 1;
	else
		*dec = decimal_count(*n);
	if (*n >= 0)
	{
		number = (char *) malloc(*dec + 1);
		*i = 0;
	}
	else
	{
		number = (char *) malloc(*dec + 2);
		*number = '-';
		*n *= -1;
		*i = 1;
	}
	return (number);
}

char	*ft_itoa(int n)
{
	int		dec;
	int		i;
	int		aux;
	char	*number;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	number = alloc_and_values(&n, &i, &dec);
	while (dec)
	{
		aux = n / ft_power(10, dec - 1);
		number[i] = aux + 48;
		n -= aux * ft_power(10, dec - 1);
		dec--;
		while (dec - decimal_count(n) > 0)
		{
			number[++i] = '0';
			dec--;
		}
		i++;
	}
	number[i] = '\0';
	return (number);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("res: %s\n", ft_itoa(-100));
	printf("res: %s\n", ft_itoa(0));
	printf("res: %s\n", ft_itoa(-344));
	//
	printf("res: %s\n", ft_itoa(-1));
	printf("res: %s\n", ft_itoa(5));
	printf("res: %s\n", ft_itoa(10));
	printf("res: %s\n", ft_itoa(2030));
	printf("res: %s\n", ft_itoa(20000));
	printf("res: %s\n", ft_itoa(2147483647));
	printf("res: %s\n", ft_itoa(-2147483648));
	printf("res: %s\n", ft_itoa(-2147483647));
	return (0);
}
*/