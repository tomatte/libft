/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 03:59:22 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/09 22:10:53 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		dst_len;
	int		src_len;
	size_t	i;
	char	*s;

	s = (char *) src;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	while (i + 1 < size && *s)
	{
		dst[i] = *s;
		s++;
		i++;
	}
	dst[i] = '\0';
	if (dst_len >= (int) size)
		return (size + src_len);
	return ((size_t)(dst_len + src_len));
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
int	main(void)
{
	char	str1[] = "boa ";
	char	str2[] = "noite!";
	char	*buffer1;
	char	*buffer2;
	int		l1;
	int		l2;

	buffer1 = (char *) malloc(11);
	buffer2 = (char *) malloc(11);
	strlcpy(buffer1, str1, 5);
	strlcpy(buffer2, str1, 5);
	l1 = ft_strlcat(buffer1, str2, 11);
	l2 = strlcat(buffer2, str2, 11);
	printf("mine: %s\tl1: %d\n", buffer1, l1);
	printf("orig: %s\tl2: %d\n", buffer2, l2);

	printf("\n\n");
	buffer1 = (char *) malloc(30);
	buffer2 = (char *) malloc(30);
	strlcpy(buffer1, "caaaaaaaaaaaaaaaaaaaaaaaaaaaa", 5);
	strlcpy(buffer2, "caaaaaaaaaaaaaaaaaaaaaaaaaaaa", 5);
	l1 = ft_strlcat(buffer1, str2, 11);
	l2 = strlcat(buffer2, str2, 11);
	printf("mine: %s\tl1: %d\n", buffer1, l1);
	printf("orig: %s\tl2: %d\n", buffer2, l2);

	printf("\n\n");
	buffer1 = (char *) malloc(30);
	buffer2 = (char *) malloc(30);
	strlcpy(buffer1, str1, 5);
	strlcpy(buffer2, str1, 5);
	l1 = ft_strlcat(buffer1, "noite, fazer logo 12345678", 30);
	l2 = strlcat(buffer2, "noite, fazer logo 12345678", 30);
	printf("mine: %s\tl1: %d\n", buffer1, l1);
	printf("orig: %s\tl2: %d\n", buffer2, l2);

	printf("\n\n");
	buffer1 = (char *) malloc(15);
	buffer2 = (char *) malloc(15);
	buffer1[0] = '\0';
	buffer2[0] = '\0';
	buffer1[11] = 'a';
	buffer2[11] = 'a';
	memset(buffer1, 0, 14);
	memset(buffer2, 0, 14);
	memset(buffer1, 'r', 6);
	memset(buffer2, 'r', 6);
	l1 = ft_strlcat(buffer1, "lorem ipsum", 14);
	l2 = strlcat(buffer2, "lorem ipsum", 14);
	printf("mine: %s\tl1: %d\n", buffer1, l1);
	printf("orig: %s\tl2: %d\n", buffer2, l2);
	return (0);
}
*/