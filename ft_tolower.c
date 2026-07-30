/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 22:10:23 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/07 22:10:24 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + ' ');
	return (c);
}
/*
int	main(void)
{
	unsigned char	letter;
	
	letter = 'a';
	printf("char = %c, conversion = %c\n", letter, tolower(letter));
	letter = 'z';
	printf("char = %c, conversion = %c\n", letter, tolower(letter));
	letter = 'G';
	printf("char = %c, conversion = %c\n", letter, tolower(letter));
	letter = 'Z';
	printf("char = %c, conversion = %c\n", letter, tolower(letter));
	letter = '7';
	printf("char = %c, conversion = %c\n", letter, tolower(letter));
	letter = (unsigned char) 128;
	printf("char = %c, conversion = %c\n", letter, tolower(letter));
	return (0);
}
// */
