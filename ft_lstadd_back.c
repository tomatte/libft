/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:14:24 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/20 17:56:46 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*first;
	t_list	*new;
	char	name[] = "ABCDEFGH";
	char	c = 'Z';
	first = ft_lstnew(&name[0]);
	printf("lstsize: %d\n", ft_lstsize(first));

	int	i = 0;
	while (name[++i])
	{
		new = ft_lstnew(&name[i]);
		ft_lstadd_front(&first, new);
	}
	printf("lstlast: %c\n", *((char *) (ft_lstlast(first)->content)));
	ft_lstadd_back(&first, ft_lstnew(&c));
	printf("newlastback: %c\n", *((char *) (ft_lstlast(first)->content)));

	//gcc ft_lstadd_back.c ft_lstsize.c 
	//ft_lstnew.c ft_lstadd_front.c ft_lstlast.c
	return (0);
}
*/