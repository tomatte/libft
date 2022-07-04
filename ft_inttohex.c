/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inttohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 04:59:47 by dbrandao          #+#    #+#             */
/*   Updated: 2022/07/04 06:15:53 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	hex_len(int number)
{
	int	i;

	if (!number)
		return (1);
	i = 0;
	while (number % 16)
	{
		number /= 16;
		i++;
	}
	return (i);
}

char	*ft_inttohex(int number)
{
	const char	hexmap[] = "0123456789abcdef";
	char		*hexnumber;
	int			remainder;
	int			len;

	len = hex_len(number);
	hexnumber = (char *) malloc(sizeof(char) * len + 1);
	if (!hexnumber)
		return (NULL);
	hexnumber[len] = '\0';
	remainder = 1;
	while (len--)
	{
		remainder = number % 16;
		number = number / 16;
		hexnumber[len] = hexmap[remainder];
	}
	return (hexnumber);
}
