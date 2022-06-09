/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:10:58 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/09 22:54:05 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	find_char(const char *set, char c)
{
	if (ft_strchr(set, c))
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*begin;
	char	*end;
	char	*trimmed;
	size_t	i;

	begin = (char *) s1;
	i = 0;
	while (find_char(set, *begin))
	{
		begin++;
		i++;
		if (i >= ft_strlen(s1))
			return (ft_strdup(""));
	}
	end = (char *) &s1[ft_strlen(s1) - 1];
	while (find_char(set, *end))
		end--;
	i = 0;
	while (&begin[i] != end)
		i++;
	i++;
	trimmed = (char *) malloc(i + 1);
	ft_strlcpy(trimmed, begin, i + 1);
	return (trimmed);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("0: |%s|\n", ft_strtrim("        ", "\t \n"));
	printf("1: |%s|\n", ft_strtrim("  morangos   ", " "));
	printf("2: |%s|\n", ft_strtrim("jjjjjmorangosjj", "jj"));
	printf("3: |%s|\n", ft_strtrim("           morangos   ", " "));
	char	s[] = "abbb aaad cc cbabcba cbacba cbgatinhos  cabcba cbabcab acb ";
	printf("4: |%s|\n", ft_strtrim(s, " abcd"));
	return (0);
}
*/