/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:14:42 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/25 15:58:18 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

//jumps addresses
char	*jump(char *s, char c)
{
	while (*s != c && *s)
		s++;
	while (*s == c && *s)
		s++;
	return (s);
}

//returns the number of strings to be created
int	split_len(char *s, char c)
{
	int	len;

	len = 0;
	while (*s)
	{
		if (*s != c)
			len++;
		while (*s != c && *s)
			s++;
		while (*s == c && *s)
			s++;
	}
	return (len);
}

//create new string
char	*new_str(char *str, char c)
{
	int		i;
	char	*new;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	if (!i)
		return (NULL);
	new = (char *) malloc(i + 1);
	ft_strlcpy(new, str, i + 1);
	return (new);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	char	*s1;
	char	**strings;

	while (*s == c && *s)
		s++;
	s1 = (char *) s;
	len = split_len(s1, c);
	strings = (char **) malloc(sizeof(char *) * (len + 1));
	i = 0;
	while (i < len)
	{
		strings[i] = new_str(s1, c);
		s1 = jump(s1, c);
		i++;
	}
	strings[i] = NULL;
	return (strings);
}
