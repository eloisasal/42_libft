/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 09:32:25 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/11 09:32:26 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*prev;

	if (lst == NULL)
		return (NULL);
	while (lst)
	{
		prev = lst;
		lst = lst->next;
	}
	return (prev);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;

	lst = NULL;

	node1 = ft_lstnew(strdup("one"));
	node2 = ft_lstnew(strdup("two"));
	node3 = ft_lstnew(strdup("three"));

	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);

	printf("List:\n");
	printf("%s\n", (char *)node1->content);
	printf("%s\n", (char *)node2->content);
	printf("%s\n", (char *)node3->content);

	last = ft_lstlast(lst);
	if (last)
		printf("\nLast node: %s\n", (char *)last->content);

	ft_lstclear(&lst, free);

	return (0);
} // */
