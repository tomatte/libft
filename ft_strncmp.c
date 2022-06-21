/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 00:34:47 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/21 17:02:31 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	if (!n)
		return (0);
	while (str1[i] || str2[i])
	{
		if (i + 1 == n)
			break ;
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("mine: %d\n", ft_strncmp("abb", "aba", 3));
	printf("orig: %d\n\n", strncmp("abb", "aba", 3));

	printf("mine: %d\n", ft_strncmp("abcdefghij", "abcdefahij", 6));
	printf("orig: %d\n\n", strncmp("abcdefghij", "abcdefahij", 6));

	printf("mine: %d\n", ft_strncmp("abcdefghij", "abcdefahij", 7));
	printf("orig: %d\n\n", strncmp("abcdefghij", "abcdefahij", 7));

	printf("mine: %d\n", ft_strncmp("abcdefghij", "abcdefahij", 0));
	printf("orig: %d\n\n", strncmp("abcdefghij", "abcdefahij", 0));

	printf("mine: %d\n", ft_strncmp("abcdefghij", "abcdefahij", -1));
	printf("orig: %d\n\n", strncmp("abcdefghij", "abcdefahij", -1));

	printf("mine: %d\n", ft_strncmp("abcdefghij", "a", 3));
	printf("orig: %d\n\n", strncmp("abcdefghij", "a", 3));

	printf("mine: %d\n", ft_strncmp("a", "abcd", 3));
	printf("orig: %d\n\n", strncmp("a", "abcd", 3));

	printf("mine: %d\n", ft_strncmp("", "abcd", 3));
	printf("orig: %d\n\n", strncmp("", "abcd", 3));

	printf("mine: %d\n", ft_strncmp("", "", 3));
	printf("orig: %d\n\n", strncmp("", "", 3));

	char	*c;
	char 	a;
	c = &a;
	printf("mine: %d\n", ft_strncmp(c, "abcdefghia", 5));
	printf("orig: %d\n\n", strncmp(c, "abcdefghia", 5));

	printf("final mine: %d\n", ft_strncmp("test\200", "test\0", 6));
	printf("final orig: %d\n\n", strncmp("test\200", "test\0", 6));
	char c = '\200';
	printf("p: %d\n", c);
	return (0);
}
*/