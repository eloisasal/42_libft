/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:09:28 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/04 15:10:00 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char c;
	int		ret;
	
	c = 'a';
	ret = ft_isdigit(c);
	printf("%c ? %d\n", c, ret);
	c = 'Z';
	ret = ft_isdigit(c);
	printf("%c ? %d\n", c, ret);
	c = '5';
	ret = ft_isdigit(c);
	printf("%c ? %d\n", c, ret);
	c = '0';
	ret = ft_isdigit(c);
	printf("%c ? %d\n", c, ret);
	c = '@';
	ret = ft_isdigit(c);
	printf("%c ? %d\n", c, ret);
	return (0);
}// */
