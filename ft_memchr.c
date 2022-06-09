/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 22:02:04 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/08 23:24:17 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t			i;

	if (!s)
		return (NULL);
	str = (char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (char) c)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	printf("orig: %p\n", memchr(s, 2, 3));
	printf("mine: %p\n", ft_memchr(s, 2, 3));
	return (0);
}
*/