/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 17:29:06 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/08 00:46:00 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_min(int val1, int val2)
{
	if (val1 <= val2)
		return (val1);
	return (val2);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (size + src_len);
	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char	*src;
	char	*dst;
	int		ret;
	int		siz;
	
	dst = malloc(12);
	src = malloc(9);
	siz = 9;
	strcpy(src, " ,listen!");
	strcpy(dst, "Hey");
	printf("src = %s, siz = %d\n", src, siz);
	printf("dst = %s\n\n===============\n\n", dst);
	ret = ft_strlcat(dst, src, (size_t) siz);
	printf("src = %s, siz = %d\n", src, siz);
	printf("dst = %s, ret = %d\n\n", dst, siz);
	printf("===============\n");
	printf("===============\n");
	printf("===============\n");
	siz = 9;
	strcpy(src, " ,listen!");
	strcpy(dst, "Hey");
	printf("src = %s, siz = %d\n", src, siz);
	printf("dst = %s\n\n===============\n\n", dst);
	ret = gpt_strlcat(dst, src, (size_t) siz);
	printf("src = %s, siz = %d\n", src, siz);
	printf("dst = %s, ret = %d\n\n", dst, siz);
	return (0);
}
// */
