/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:14:42 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/18 23:42:12 by dbrandao         ###   ########.fr       */
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

/*
#include <stdio.h>
char	**split(char const *s, char c);
void	print_strarr(char **strings)
{
	while (*strings)
	{
		if (**strings == '\0')
			printf("\\0\n");
		else
			printf("%s\n", *strings);
		free(*strings);
		strings++;
	}
	printf("\n");
}
int	main(void)
{
	char	**strings;

	strings = ft_split("amo,,,uvas pretas", 0);
	printf("Mine:\n");
	print_strarr(strings);
	free(strings);
	
	strings = ft_split("amo,,,uvas pretas", ',');
	printf("Mine:\n");
	print_strarr(strings);
	free(strings);

	strings = ft_split("amo,,,uvas pretas", ',');
	printf("Mine:\n");
	print_strarr(strings);
	strings = split("amo,,,uvas pretas", ',');
	printf("WW:\n");
	print_strarr(strings);

	strings = ft_split("alo,galera,do,pagode", ',');
	printf("Mine:\n");
	print_strarr(strings);
	strings = split("alo,galera,do,pagode", ',');
	printf("WW:\n");
	print_strarr(strings);	
	
	strings = ft_split("valeu,,,,meu povo,,,,,,almenarense", ',');
	printf("Mine:\n");
	print_strarr(strings);
	strings = split("valeu,,,,meu povo,,,,,,almenarense", ',');
	printf("WW:\n");
	print_strarr(strings);

	strings = ft_split(",,,,,,,,", ',');
	printf("Mine:\n");
	print_strarr(strings);
	strings = split(",,,,,,,,", ',');
	printf("WW:\n");
	print_strarr(strings);

	char w[] = "morango,de,uva,com,azeite,cobertura,chocolate,amenduas,patel";
	strings = ft_split(w, ',');
	printf("Mine:\n");
	print_strarr(strings);
	strings = split(w, ',');
	printf("WW:\n");
	print_strarr(strings);
	
	strings = ft_split(",testando, ,123,", ',');
	printf("Mine:\n");
	print_strarr(strings);
	strings = split(",testando, ,123,", ',');
	printf("ww:\n");
	print_strarr(strings);

	strings = ft_split(",,,,,,,,comendo,,,,,,muitas,,,,,,frutas!,,,,", ',');
	printf("Mine:\n");
	print_strarr(strings);
	strings = split(",,,,,,,,comendo,,,,,,muitas,,,,,,frutas!,,,,", ',');
	printf("ww:\n");
	print_strarr(strings);

	char w1[] = "comendo,,,frutas,,fresquinhas,,na fazenda,,,do seu ze,,hoje";
	strings = ft_split(w1, ',');
	printf("Mine:\n");
	print_strarr(strings);
	strings = split(w1, ',');
	printf("ww:\n");
	print_strarr(strings);

	//functions needed:
	//gcc ft_split.c split.c ft_strlcpy.c ft_strtrim.c 
	//ft_substr.c ft_strdup.c ft_strlen.c ft_strchr.c
	return (0);
}
*/
