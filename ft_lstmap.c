/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 10:03:58 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/11 10:04:01 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*tmp_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	n_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		tmp_node = ft_lstnew(new_content);
		if (!tmp_node)
		{
			del(new_content);
			ft_lstclear(&n_list, del);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&n_list, tmp_node);
		lst = lst -> next;
		if (!lst)
			return (n_list);
	}
	return (n_list);
}
/*
static void	*map_strlen(void *s)
{
	size_t	*res;
	char	*str;

	str = (char *)s;
	res = malloc(sizeof(size_t));
	if (!res)
		return (NULL);
	*res = ft_strlen(str);
	return (res);
}
int	main(void)
{
	t_list	*lst;
	t_list	*map;
	t_list	*tmp;

	lst = NULL;

	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("one")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("two")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("three")));

	tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	
	map = ft_lstmap(lst, map_strlen, free);

	tmp = map;
	while (tmp)
	{
		printf("%zu\n", *(size_t *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&lst, free);
	ft_lstclear(&map, free);
	return (0);
}// */
