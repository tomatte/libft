/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:00:26 by dbrandao          #+#    #+#             */
/*   Updated: 2022/06/20 14:22:12 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *) malloc(sizeof(t_list));
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*test;
	char	c = 'S';
	test = ft_lstnew(&c);
	printf("%c\n", *((char *) test->content));
	return (0);
}*/