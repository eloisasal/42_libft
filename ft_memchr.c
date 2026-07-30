/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 00:55:06 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/08 00:55:07 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char) c)
			return ((void *)ptr);
		if (!ptr)
			return ((void *) '\0');
		ptr++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str;

	str = malloc(30);
	strcpy(str, "!YO! hello! world! great!");
	printf("first match = %s\n", (unsigned char *) ft_memchr(str, '!', 25));
	return (0);
} // */
