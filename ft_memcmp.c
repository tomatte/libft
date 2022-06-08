/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 05:30:18 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/06 05:52:00 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *) s1;
	c2 = (unsigned char *) s2;
	i = 0;
	if (!n)
		return (0);
	while (i + 1 < n)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (c1[i] - c2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[] = "jabuticabas maduras verdinhas do pé";
	char	str2[] = "jabuticabas maduras amarelas da mão";
	printf("mine: %d\n", ft_memcmp(str1, str2, 10));
	printf("orig: %d\n\n", memcmp(str1, str2, 10));

	printf("mine: %d\n", ft_memcmp(str1, str2, 30));
	printf("orig: %d\n\n", memcmp(str1, str2, 30));

	printf("mine: %d\n", ft_memcmp(str1, "", 30));
	printf("orig: %d\n\n", memcmp(str1, "", 30));

	printf("mine: %d\n", ft_memcmp(str1, str2, 0));
	printf("orig: %d\n\n", memcmp(str1, str2, 0));

	printf("mine: %d\n", ft_memcmp("ala", "n", 2));
	printf("orig: %d\n\n", memcmp("ala", "n", 2));

	printf("mine: %d\n", ft_memcmp("ala", "alb", 3));
	printf("orig: %d\n\n", memcmp("ala", "alb", 3));

	printf("mine: %d\n", ft_memcmp("ala", "alz", 3));
	printf("orig: %d\n\n", memcmp("ala", "alz", 3));

	printf("mine: %d\n", ft_memcmp("alz", "ala", 3));
	printf("orig: %d\n\n", memcmp("alz", "ala", 3));

	char	test1[] = "alz";
	char	test2[] = "ala";
	printf("mine: %d\n", ft_memcmp(test1, test2, 3));
	printf("orig: %d\n\n", memcmp(test1, test2, 3));
	return (0);
}
*/