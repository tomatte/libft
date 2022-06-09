/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:45:08 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/08 23:43:31 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (i < size - 1 && src[i])
	{
		dst[i] = ((char *) src)[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
int	main(void)
{
	char	*str1;
	char	*str2;
	int		l1;
	int		l2;

	str1 = (char *) malloc(7);
	str2 = (char *) malloc(7);
	l1 = ft_strlcpy(str1, "daniel", 7);
	l2 = strlcpy(str2, "daniel", 7);
	printf("mine: %s\tl1: %d\n", str1, l1);
	printf("orig: %s\tl2: %d\n", str2, l2);

	l1 = ft_strlcpy(str1, "", 7);
	l2 = strlcpy(str2, "", 7);
	printf("mine: %s\tl1: %d\n", str1, l1);
	printf("orig: %s\tl2: %d\n", str2, l2);

	l1 = ft_strlcpy(str1, "dani", 0);
	l2 = strlcpy(str2, "dani", 0);
	printf("mine: %s\tl1: %d\n", str1, l1);
	printf("orig: %s\tl2: %d\n", str2, l2);

	l1 = ft_strlcpy(str1, "", 0);
	l2 = strlcpy(str2, "", 0);
	printf("mine: %s\tl1: %d\n", str1, l1);
	printf("orig: %s\tl2: %d\n", str2, l2);

	l1 = ft_strlcpy(str1, "daniel indaodemais", 10);
	l2 = strlcpy(str2, "daniel indaodemais", 10);
	printf("mine: %s\tl1: %d\n", str1, l1);
	printf("orig: %s\tl2: %d\n", str2, l2);

	l1 = ft_strlcpy(str1, "dani", 20);
	l2 = strlcpy(str2, "dani", 20);
	printf("mine: %s\tl1: %d\n", str1, l1);
	printf("orig: %s\tl2: %d\n", str2, l2);

	str1 = (char *) malloc(1);
	str2 = (char *) malloc(1);
	l1 = ft_strlcpy(str1, "d", 1);
	l2 = strlcpy(str2, "d", 1);
	printf("mine: %s\tl1: %d\n", str1, l1);
	printf("orig: %s\tl2: %d\n", str2, l2);
	return (0);
}*/