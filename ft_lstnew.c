/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 07:52:58 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/11 07:53:01 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*next;

	next = (t_list *)malloc(sizeof(t_list));
	if (!next)
		return (NULL);
	next->content = content;
	next->next = NULL;
	return (next);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	t_list	*node;

	node = ft_lstnew(strdup("hello"));

	if (!node)
	{
		printf("malloc failed\n");
		return (1);
	}

	printf("Content: %s\n", (char *)node->content);
	printf("Next: %p\n", (void *)node->next);

	ft_lstdelone(node, free);

	return (0);
} // */
