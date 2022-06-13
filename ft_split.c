/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 20:22:10 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/13 21:53:44 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	len_split(char const *s, char c)
{
	int	splits;

	splits = 0;
	while (*s)
	{
		if (*s == c)
			splits++;
		s++;
	}
	return (splits);
}

int	strchar_len(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		size;
	int		splits;
	char	**strings;

	splits = len_split(s, c);
	strings = (char **) malloc(sizeof(char *) * (splits + 1));
	j = 0;
	i = 0;
	strings[0] = (char *) malloc(strchar_len(s, c) + 1);
	while (j < splits + 1)
	{
		size = strchar_len(&s[i], c) + 1;
		strings[j] = (char *) malloc(size);
		ft_strlcpy(strings[j], &s[i], size);
		i += size - 1;
		j++;
		if (s[i] == c)
			i++;
	}
	strings[j] = NULL;
	return (strings);
}

/*
#include <stdio.h>
void	print_strarr(char **strings)
{
	while (*strings)
	{
		if (**strings == '\0')
			printf("\\0\n");
		else
			printf("%s\n", *strings++);
		strings++;
	}
	printf("\n");
}
int		main(void)
{
	char	**strings;

	strings = ft_split("lindo dia!", ' ');
	print_strarr(strings);

	strings = ft_split("limonada,cachaça,pink limonade,suco de maracujá", ',');
	print_strarr(strings);

	strings = ft_split("", ',');
	print_strarr(strings);
		
	strings = ft_split(" ", ',');
	print_strarr(strings);

	strings = ft_split("     ", ' ');
	print_strarr(strings);
	return (0);
}
*/