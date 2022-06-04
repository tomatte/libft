/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 01:09:09 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/04 01:13:37 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	while (*s)
	{
		if ((int)(*s) == c)
			last = (char *) s;
		s++;
	}
	if (*last)
		return (last);
	return (NULL);
}
