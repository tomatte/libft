/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 04:48:39 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/06 05:20:54 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] || s2[i])
	{
		if (i + 1 == n)
			break ;
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i++])
		;
	return (i - 1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (!*little)
		return ((char *) big);
	while (i + little_len < len && big[i])
	{
		if (!ft_strncmp(&big[i], little, little_len))
			return ((char *)(&big[i]));
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char	big[] = "picolé de suquinho é muito refrescante";
	
	printf("mine: %s\n", ft_strnstr(big, "co", 20));
	printf("orig: %s\n\n", strnstr(big, "co", 20));
	
	printf("mine: %s\n", ft_strnstr(big, "fruta", 15));
	printf("orig: %s\n\n", strnstr(big, "fruta", 15));
	
	printf("mine: %s\n", ft_strnstr(big, "co", 1));
	printf("orig: %s\n\n", strnstr(big, "co", 1));

	printf("mine: %s\n", ft_strnstr(big, "co", 0));
	printf("orig: %s\n\n", strnstr(big, "co", 0));

	printf("mine: %s\n", ft_strnstr(big, "", 20));
	printf("orig: %s\n\n", strnstr(big, "", 20));

	printf("mine: %s\n", ft_strnstr(big, "refre", 100));
	printf("orig: %s\n\n", strnstr(big, "refre", 100));

	printf("mine: %s\n", ft_strnstr(big, "dino", 100));
	printf("orig: %s\n\n", strnstr(big, "dino", 100));

	printf("mine: %s\n", ft_strnstr("", "refre", 100));
	printf("orig: %s\n\n", strnstr("", "refre", 100));

	printf("mine: %s\n", ft_strnstr("", "", 100));
	printf("orig: %s\n\n", strnstr("", "", 100));
	return (0);
}
*/