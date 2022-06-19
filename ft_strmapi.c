/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:43:31 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/19 15:43:16 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	result = ft_strdup(s);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, result[i]);
		i++;
	}
	return (result);
}

/*
#include <stdio.h>
#include <unistd.h>
char	test(unsigned int i, char c)
{
	if (c > 96)
		return (c - 32);
	return (c);
}
void	putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}
int	main(void)
{
	char	*new;

	new = ft_strmapi("rosas sao vermelhas", &test);
	putstr(new);
	free(new);

	new = ft_strmapi("", &test);
	putstr(new);
	free(new);

	return (0);
}
*/