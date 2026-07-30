/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:54:19 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/04 16:54:21 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	counter;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (siz == 0)
		return (srclen);
	counter = 0;
	while (counter < siz - 1 && counter < srclen)
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (srclen);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

int	main(void)
{
	char	*fuck;
	char	*you;
	
	fuck = malloc(50);
	you = malloc(50);
	strcpy(fuck, "Im booooored lol\0");
	ft_strlcpy(you, fuck, 50);
	printf("%s == %s ? %d\n", fuck, you, strcmp(fuck, you));
	return (0);
}
// */
