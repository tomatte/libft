/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 03:59:22 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/04 05:02:26 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i++])
		;
	return (i - 1);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		full_len;
	char	*s;

	s = (char *) src;
	i = 0;
	while (dst[i])
		i++;
	full_len = i + ft_strlen(src);
	while (i < (int) size - 1 && src[i])
	{
		dst[i] = *s;
		s++;
		i++;
	}
	dst[i] = '\0';
	return ((size_t) full_len);
}
