/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:49:05 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/26 22:49:58 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;

	if (!dest && !src)
		return (NULL);
	if ((unsigned char *) dest > (unsigned char *) src)
	{
		i = (int) n - 1;
		while (i >= 0)
		{
			((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int) n)
		{
			((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
			i++;
		}
	}
	return (dest);
}
