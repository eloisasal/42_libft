/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:53:08 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/04 15:53:10 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			counter;

	if (!dst && !src && n > 0)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	counter = 0;
	while (counter < n)
	{
		d[counter] = s[counter];
		counter++;
	}
	return (dst);
}
/*
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*ret;
	int		len;
	
	str1 = malloc(50);
	str2 = malloc(50);
	ret = malloc(50);
	str1 = "May the force will be with you,    good luck doctor.";
	len = 5;
	ret = ft_memcpy(str2, str1, len);
	printf("%d = %s || %s \n", len, str2, ret);
	len = 15;
	ret = ft_memcpy(str2, str1, len);
	printf("%d = %s || %s \n", len, str2, ret);
	len = 25;
	ret = ft_memcpy(str2, str1, len);
	printf("%d = %s || %s \n", len, str2, ret);
	len = 35;
	ret = ft_memcpy(str2, str1, len);
	printf("%d = %s || %s \n", len, str2, ret);
	len = 45;
	ret = ft_memcpy(str2, str1, len);
	printf("%d = %s || %s \n", len, str2, ret);
	return (0);
} // */
