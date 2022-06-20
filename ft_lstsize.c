/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:48:42 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/20 15:03:32 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 1;
	while (lst->next)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*first;
	t_list	*new;
	char	name[] = "ABCDEFGH";
	first = ft_lstnew(&name[0]);
	printf("lstsize: %d\n", ft_lstsize(first));

	int	i = 0;
	while (name[++i])
	{
		new = ft_lstnew(&name[i]);
		ft_lstadd_front(&first, new);
	}
	printf("lstsize: %d\n", ft_lstsize(first));
	return (0);
}
*/