/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:34:52 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/26 22:05:59 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	decimals_count(int n)
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

int	powerr(int n, int pwr)
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
		*dec = decimals_count(*n);
	if (*n >= 0)
	{
		number = (char *) malloc(*dec + 1);
		if (!number)
			return (NULL);
		*i = 0;
	}
	else
	{
		number = (char *) malloc(*dec + 2);
		if (!number)
			return (NULL);
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
	if (!number)
		return (NULL);
	while (dec)
	{
		aux = n / powerr(10, dec - 1);
		number[i] = aux + 48;
		n -= aux * powerr(10, dec - 1);
		dec--;
		while (dec - decimals_count(n) > 0)
		{
			number[++i] = '0';
			dec--;
		}
		i++;
	}
	number[i] = '\0';
	return (number);
}
