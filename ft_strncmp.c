/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 00:47:33 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/08 00:47:53 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = malloc(30);
	str2 = malloc(30);
	strcpy(str1, "hello aworld!");
	strcpy(str2, "hello Auniverse!");
	printf("\n\nstr1 = %s\nstr2 = %s\n", str1, str2);
	printf("diff = %d", ft_strncmp(str1, str2, 30));
	strcpy(str1, "\0");
	strcpy(str2, "\0");
	printf("\n\nstr1 = %s\nstr2 = %s\n", str1, str2);
	printf("diff = %d", ft_strncmp(str1, str2, 30));
	return (0);
}
// */
