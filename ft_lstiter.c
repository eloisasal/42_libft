/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 10:01:18 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/11 10:01:20 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

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

	printf("Using ft_lstiter:\n");
	ft_lstiter(lst, print_content);

	tmp = lst;
	while (tmp)
	{
		printf("Verify: %s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&lst, free);

	return (0);
} // */
