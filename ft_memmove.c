/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:59:16 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/04 15:59:18 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	if (!dst && !src && len > 0)
		return (NULL);
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dst);
}
/*
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*buffer;
	char	*src;
	char	*dst;
	
	buffer = malloc(500);
	strcpy(buffer, "hello world this is just a test, wtf dude");
	src = &(buffer[0]);
	dst = &(buffer[10]);
	printf("buffer: %s\n", buffer);
	printf("======= test 1 ======\n");
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	ft_memmove(dst, src, 20);
	printf("dst: %s\n", dst);
	printf("======= test 2 ======\n");
	strcpy(buffer, "hello world this is just a test, wtf dude");
	printf("buffer: %s\n", buffer);
	src = &(buffer[20]);
	dst = &(buffer[10]);
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	ft_memmove(dst, src, 21);
	printf("dst: %s\n", dst);
	return (0);
} // */
