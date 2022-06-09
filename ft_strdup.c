/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:49:11 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/08 22:07:33 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	dup = (char *) malloc(ft_strlen(s) + 1);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*dup1;
	char	*dup2;
	
	str1 = (char *) malloc(ft_strlen("sorvete") + 1);
	str2 = (char *) malloc(ft_strlen("sorvete") + 1);

	strcpy(str1, "sorvete");
	strcpy(str2, "sorvete");

	dup1 = ft_strdup(str1);
	dup2 = strdup(str2);
	printf("----mine----\nstr1: %s\ndup1: %s\n\n", str1, dup1);
	printf("----orig----\nstr2: %s\ndup2: %s\n\n\n", str2, dup2);

	dup1 = ft_strdup("");
	dup2 = strdup("");
	printf("mine: %s\n", dup1);
	printf("orig: %s\n\n", dup2);

	dup1 = ft_strdup(" a");
	dup2 = strdup(" a");
	printf("mine: %s\n", dup1);
	printf("orig: %s\n\n", dup2);

	dup1 = ft_strdup("1");
	dup2 = strdup("1");
	printf("mine: %s\n", dup1);
	printf("orig: %s\n\n", dup2);
	
	return (0);
}
*/