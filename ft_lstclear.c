/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 09:54:53 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/11 09:54:54 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*actual;

	if (lst && del)
	{
		actual = *lst;
		while (actual)
		{
			next = actual->next;
			del(actual->content);
			free(actual);
			actual = next;
		}
	}
	*lst = NULL;
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*tmp;

	lst = NULL;

	node1 = ft_lstnew(strdup("one"));
	node2 = ft_lstnew(strdup("two"));
	node3 = ft_lstnew(strdup("three"));

	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);

	tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&lst, free);

	if (lst == NULL)
		printf("List cleared successfully\n");

	return (0);
} // */
