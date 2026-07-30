/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:12:28 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/04 15:12:31 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
/*int	main(void)
{
	char c;
	int		ret;
	
	c = 'a';
	ret = ft_isalnum(c);
	printf("%c ? %d\n", c, ret);
	c = 'Z';
	ret = ft_isalnum(c);
	printf("%c ? %d\n", c, ret);
	c = '5';
	ret = ft_isalnum(c);
	printf("%c ? %d\n", c, ret);
	c = '0';
	ret = ft_isalnum(c);
	printf("%c ? %d\n", c, ret);
	c = '@';
	ret = ft_isalnum(c);
	printf("%c ? %d\n", c, ret);
	return (0);
}// */
