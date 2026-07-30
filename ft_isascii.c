/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:21:42 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/04 15:21:44 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	unsigned 	char c;
	int		ret;
	
	c = 'a';
	ret = ft_isascii(c);
	printf("%c ? %d\n", c, ret);
	c = 'Z';
	ret = ft_isascii(c);
	printf("%c ? %d\n", c, ret);
	c = '5';
	ret = ft_isascii(c);
	printf("%c ? %d\n", c, ret);
	c = 'Ñ';
	ret = ft_isascii(c);
	printf("%u ? %d\n", c, ret);
	c = '@';
	ret = ft_isascii(c);
	printf("%c ? %d\n", c, ret);
	c = '~';
	ret = ft_isascii(c);
	printf("%c ? %d\n", c, ret);
	c = '±';
	ret = ft_isascii(c);
	printf("%c ? %d\n", c, ret);
	return (0);
}// */
