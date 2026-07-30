/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:31:58 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/04 15:31:59 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			counter;

	counter = 0;
	p = (unsigned char *)s;
	while (counter < n)
	{
		p[counter] = (unsigned char) c;
		counter++;
	}
	return (s);
}
/*
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	*ret;
	
	str = malloc(15);
	strcpy(str, "Hello world!");
	printf("src => %s\n", str);
	ret = ft_memset((void *) str, 'o', 0);
	printf("dst-1 => %s ||| %s\n", str, ret);
	ret = ft_memset(str, 'o', 5);
	printf("dst-2 => %s ||| %s\n", str, ret);
	ret = ft_memset(str, 'X', 10);
	printf("dst-3 => %s ||| %s\n", str, ret);
	return (0);
}
// */
