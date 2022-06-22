/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:49:23 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/22 18:24:41 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst || !*lst || !del)
		return ;
	while (*lst && lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	lst = NULL;
}

/*
void	del(void *content)
{
	free(content);
	content = NULL;
}

#include <stdio.h>
int	main(void)
{
	t_list	*first;
	t_list	*new;
	char	*c1;
	char	*c2;
	char	*c3;

	c1 = (char *) malloc(1);
	c2 = (char *) malloc(1);
	c3 = (char *) malloc(1);
	*c1 = 'A';
	*c2 = 'Z';
	*c3 = 'M';
	first = ft_lstnew(c1);

	ft_lstadd_front(&first, ft_lstnew(c2));
	ft_lstadd_front(&first, ft_lstnew(c3));
	printf("lstlast: %c\n", *((char *) (ft_lstlast(first)->content)));
	printf("lstsize: %d\n", ft_lstsize(first));

	printf("apago? %c\n", *((char *) first->content));
	ft_lstclear(&first, &del);
	//gcc ft_lstadd_back.c ft_lstsize.c 
	//ft_lstnew.c ft_lstadd_front.c ft_lstlast.c
	return (0);
}
*/