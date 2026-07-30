/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 01:03:12 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/08 01:03:14 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			counter;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	counter = 0;
	while (counter < n)
	{
		if (str1[counter] != str2[counter])
			return (str1[counter] - str2[counter]);
		counter++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "hello";
	s2 = "hello";

	printf("ft_memcmp equal: %d | libc: %d\n",
		ft_memcmp(s1, s2, 5),
		memcmp(s1, s2, 5));

	s2 = "hella";

	printf("ft_memcmp diff : %d | libc: %d\n",
		ft_memcmp(s1, s2, 5),
		memcmp(s1, s2, 5));

	s2 = "helloworld";

	printf("ft_memcmp partial: %d | libc: %d\n",
		ft_memcmp(s1, s2, 3),
		memcmp(s1, s2, 3));

	return (0);
} // */
