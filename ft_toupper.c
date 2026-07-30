/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 21:49:59 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/07 21:50:01 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - ' ');
	return (c);
}
/*
int	main(void)
{
	unsigned char	letter;
	
	letter = 'a';
	printf("char = %c, conversion = %c\n", letter, toupper(letter));
	letter = 'z';
	printf("char = %c, conversion = %c\n", letter, toupper(letter));
	letter = 'G';
	printf("char = %c, conversion = %c\n", letter, toupper(letter));
	letter = 'Z';
	printf("char = %c, conversion = %c\n", letter, toupper(letter));
	letter = '7';
	printf("char = %c, conversion = %c\n", letter, toupper(letter));
	letter = (unsigned char) 128;
	printf("char = %c, conversion = %c\n", letter, toupper(letter));
	return (0);
}
// */
