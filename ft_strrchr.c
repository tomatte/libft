/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 01:09:09 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/05 07:04:35 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	lc;

	lc = '\0';
	while (*s)
	{
		if ((int)(*s) == c)
		{
			last = (char *) s;
			lc = *last;
		}
		s++;
	}
	if (lc)
		return (last);
	if ((int)(*s) == c)
		return ((char *) s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	test1[] = "";
// 	char	c = 'a';
// 	printf("mine: %s\tp: %p\n", ft_strrchr(test1, c), ft_strrchr(test1, c));
// 	printf("orig: %s\tp: %p\n\n", strrchr(test1, c), strrchr(test1, c));
// 	char	test2[] = "anbnc";
// 	c = 'n';
// 	printf("mine: %s\tp: %p\n", ft_strrchr(test2, c), ft_strrchr(test2, c));
// 	printf("orig: %s\tp: %p\n\n", strrchr(test2, c), strrchr(test2, c));

// 	char	test3[] = "divine";
// 	c = '\0';
// 	printf("mine: %s\tp: %p\n", ft_strrchr(test3, c), ft_strrchr(test3, c));
// 	printf("orig: %s\tp: %p\n\n", strrchr(test3, c), strrchr(test3, c));
// 	return (0);
// }