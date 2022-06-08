/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 05:54:21 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/06 17:46:23 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n'
		|| *nptr == '\r' || *nptr == '\t' || *nptr == '\v')
	{
		nptr++;
	}
	if (*nptr == '-')
		sign *= -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr > 47 && *nptr < 58)
	{
		num = num * 10 + (*nptr - 48);
		nptr++;
	}
	return (num * sign);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("mine: %d\n", ft_atoi("81892"));
	printf("orig: %d\n\n", atoi("81892"));

	printf("mine: %d\n", ft_atoi("-81892"));
	printf("orig: %d\n\n", atoi("-81892"));

	printf("mine: %d\n", ft_atoi("   -100000"));
	printf("orig: %d\n\n", atoi("    -100000"));

	printf("mine: %d\n", ft_atoi("--81892"));
	printf("orig: %d\n\n", atoi("--81892"));

	printf("mine: %d\n", ft_atoi("--81a892"));
	printf("orig: %d\n\n", atoi("--81a892"));

	printf("mine: %d\n", ft_atoi("+818-92"));
	printf("orig: %d\n\n", atoi("+818-92"));

	printf("mine: %d\n", ft_atoi(" -2147483648"));
	printf("orig: %d\n\n", atoi(" -2147483648"));

	printf("mine: %d\n", ft_atoi(" -2147483649"));
	printf("orig: %d\n\n", atoi(" -2147483649"));

	printf("mine: %d\n", ft_atoi("-214748364999"));
	printf("orig: %d\n\n", atoi("-214748364999"));

	printf("mine: %d\n", ft_atoi("2147483647"));
	printf("orig: %d\n\n", atoi("2147483647"));

	printf("mine: %d\n", ft_atoi("0"));
	printf("orig: %d\n\n", atoi("0"));

	printf("mine: %d\n", ft_atoi("-0"));
	printf("orig: %d\n\n", atoi("-0"));
	return (0);
}
*/