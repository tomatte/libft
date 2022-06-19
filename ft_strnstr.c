/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 04:48:39 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/19 16:11:22 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (!*little)
		return ((char *) big);
	while (i + little_len <= len && big[i])
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
	char haystack[30] = "aaabcabcd";
	
	printf("mine: %s\n", ft_strnstr(haystack, "aaabc", 5));
	
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