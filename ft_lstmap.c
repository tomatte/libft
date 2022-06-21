/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 21:31:38 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/21 16:07:11 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*aux;

	if (!lst || !f || !del)
		return (NULL);
	first = ft_lstnew(f(lst->content));
	if (!first)
		return (NULL);
	aux = first;
	while (lst->next)
	{
		aux->next = ft_lstnew(f(lst->next->content));
		if (!aux->next)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		aux = aux->next;
		lst = lst->next;
	}
	return (first);
}

/*
//maolivei
#include <stdio.h>
void	del(void *content)
{
	free(content);
	content = NULL;
}
void	*add_ten(void *content)
{
	char	*a;

	a = (char *) malloc(1);
	*a = *((char *) content) + 10;
	return ((void *) a);
}
void	showlst(void *content)
{
	printf("%d\n", *((char *) content));
}
int	main(void)
{
	t_list	*first;
	t_list	*dup;
	char	*c1;
	char	*c2;
	char	*c3;

	c1 = (char *) malloc(1);
	c2 = (char *) malloc(1);
	c3 = (char *) malloc(1);
	*c1 = 1;
	*c2 = 2;
	*c3 = 3;
	first = ft_lstnew(c1);

	ft_lstadd_front(&first, ft_lstnew(c2));
	ft_lstadd_front(&first, ft_lstnew(c3));
	printf("lstsize: %d\n", ft_lstsize(first));

	dup = ft_lstmap(first, &add_ten, &del);
	
	printf("\nfirst:\n");
	ft_lstiter(first, &showlst);
	printf("\ndup:\n");
	ft_lstiter(dup, &showlst);
	//gcc -g3 ft_lstmap.c ft_lstnew.c ft_lstadd_front.c ft_lstlast.c 
	//ft_lstiter.c ft_lstsize.c ft_lstclear.c ft_lstdelone.c
	
	ft_lstclear(&first, &del);
	ft_lstclear(&dup, &del);
	return (0);
}
*/