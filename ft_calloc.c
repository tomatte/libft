/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:17:55 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/08 06:34:35 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (!nmemb || !size)
		return (NULL);
	if ((nmemb * size) / nmemb != size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	ft_putarr(int *nbr, size_t len)
{
	size_t	i;

	i = 0;
	printf("[");
	while (i < len)
	{
		printf("%d", *nbr++);
		if (i + 1 < len)
			printf(", ");
		i++;
	}
	printf("]\n");
}
int	main(void)
{
	int	*nums1;
	int	*nums2;
	int	len;
	int	size;

	len = 5;
	size = 4;
	nums1 = (int *) ft_calloc(len, size);
	nums2 = (int *) calloc(len, size);
	printf("\nmine: ");
	ft_putarr(nums1, len);
	printf("orig: ");
	ft_putarr(nums2, len);
	free(nums1);
	free(nums2);

	len = 0;
	size = 4;
	nums1 = (int *) ft_calloc(len, size);
	nums2 = (int *) calloc(len, size);
	printf("\nmine: ");
	ft_putarr(nums1, len);
	printf("orig: ");
	ft_putarr(nums2, len);
	free(nums1);
	free(nums2);

	// len = 5;
	// size = 0;
	// nums1 = (int *) ft_calloc(len, size);
	// nums2 = (int *) calloc(len, size);
	// printf("\nmine: ");
	// ft_putarr(nums1, len);
	// printf("orig: ");
	// ft_putarr(nums2, len);

	return (0);
}*/