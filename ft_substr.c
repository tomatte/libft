/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:12:54 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/08 20:23:38 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	start_size;
	char	*substr;

	if (!s || ft_strlen(s) < start + 1)
		return (ft_strdup(""));
	start_size = ft_strlen(&s[start]);
	if (start_size < len)
		len = start_size;
	substr = ((char *) malloc(len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "cavalos selvagens correndo no campo";
	char	*sub;
	
	sub = ft_substr(str, 8, 10);
	printf("%s\n", sub);
	free(sub);
	sub = ft_substr(str, 8, 50);
	printf("%s\n", sub);
	free(sub);
	sub = ft_substr(str, 1, 50);
	printf("%s\n", sub);
	free(sub);
	sub = ft_substr(str, 50, 1);
	printf("%s\n", sub);
	free(sub);
	sub = ft_substr(str, 20, 10);
	printf("%s\n", sub);
	free(sub);
	sub = ft_substr(str, 0, 10);
	printf("%s\n", sub);
	free(sub);
	// sub = ft_substr(str, 1, 0);
	// printf("%s\n", sub);
	// free(sub);
	sub = ft_substr(str, 1, 1);
	printf("%s\n", sub);
	free(sub);
	sub = ft_substr(str, 0, 2);
	printf("%s\n", sub);
	free(sub);
	sub = ft_substr(str, 1, 2);
	printf("%s\n", sub);
	free(sub);
	return (0);
}
*/