/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:03:12 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/04 15:03:16 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char c;
	int		ret;
	
	c = 'a';
	ret = ft_isalpha(c);
	printf("%c ? %d\n", c, ret);
	c = 'Z';
	ret = ft_isalpha(c);
	printf("%c ? %d\n", c, ret);
	c = '5';
	ret = ft_isalpha(c);
	printf("%c ? %d\n", c, ret);
	c = '0';
	ret = ft_isalpha(c);
	printf("%c ? %d\n", c, ret);
	c = '@';
	ret = ft_isalpha(c);
	printf("%c ? %d\n", c, ret);
	return (0);
}// */
