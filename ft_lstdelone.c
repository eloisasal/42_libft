/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 09:47:01 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/11 09:47:10 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
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

	printf("Before deletion:\n");
	tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	// delete middle node (node2 = "two")
	ft_lstdelone(node2, free);

	// IMPORTANT: fix links manually for test safety
	node1->next = node3;

	printf("\nAfter ft_lstdelone:\n");
	tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&lst, free);

	return (0);
}// */
