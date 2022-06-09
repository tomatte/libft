/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:18:01 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/08 23:58:06 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new;

	if (!s1 || !s2)
		return (ft_strdup(""));
	len = ft_strlen(s1) + ft_strlen(s2);
	new = (char *) malloc(len + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, ft_strlen(s1) + 1);
	ft_strlcat(new, s2, len + 1);
	return (new);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*s;
	printf("1: %s\n", ft_strjoin("daniel ", "lindo!"));
	printf("2: %s\n", ft_strjoin("", ""));
	printf("3: %s\n", ft_strjoin(NULL, NULL));
	printf("3: %s\n", ft_strjoin("jabuticaba", NULL));
	printf("3: %s\n", ft_strjoin("jabuticaba", ""));
	printf("3: %s\n", ft_strjoin("", "jabuticaba"));
	printf("3: %s\n", ft_strjoin("", NULL));
	printf("3: %s\n", ft_strjoin(NULL, "opa"));
	printf("3: %s\n", ft_strjoin("opa", "opa"));
	return (0);
}
*/