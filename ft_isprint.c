/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:28:30 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/04 15:28:32 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	unsigned 	char c;
	int		ret;
	
	c = 'a';
	ret = ft_isprint(c);
	printf("%c ? %d\n", c, ret);
	c = 'Z';
	ret = ft_isprint(c);
	printf("%c ? %d\n", c, ret);
	c = '5';
	ret = ft_isprint(c);
	printf("%u ? %d\n", c, ret);
	c = '@';
	ret = ft_isprint(c);
	printf("%c ? %d\n", c, ret);
	c = '~';
	ret = ft_isprint(c);
	printf("%c ? %d\n", c, ret);
	c = '\0';
	ret = ft_isprint(c);
	printf("%c ? %d\n", c, ret);
	c = '\t';
	ret = ft_isprint(c);
	printf("%c ? %d\n", c, ret);
	return (0);
}// */
