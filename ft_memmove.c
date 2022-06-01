/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:49:05 by dbrandao          #+#    #+#             */
/*   Updated: 2022/05/31 23:07:20 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!*((char *) dest) || !*((char *) src))
		return (NULL);

	while (i < n)
	{
		if (!((char *) dest)[i] || !((char *) src)[i])
			break;
		((char *) dest)[i] = ((char *) src)[i];
		i++;
	}
	return (dest);
}
