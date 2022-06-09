/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 00:51:00 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/08 22:48:45 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if (*s == (char) c)
		return ((char *) s);
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	*s;
// 	printf("mine: %s\n", ft_strchr("ea", '\0'));
// 	printf("orig: %s\n", strchr("ea", '\0'));
// 	return (0);
// }