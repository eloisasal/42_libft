/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 03:41:16 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/08 03:41:19 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	ret = malloc(nmemb * size);
	if (ret == NULL)
		return (NULL);
	ft_memset(ret, 0, nmemb * size);
	return ((void *)ret);
}
/*
int	main(void)
{
	char	*dst;
	size_t		a_length;
	size_t		size;
	size_t		ctr;
	
	a_length = 5;
	size = 3;
	ctr = 0;
	dst = (char *) ft_calloc(a_length, size);
	while (++ctr <= a_length)
		printf("%c\n", (char) dst[ctr]);
	return (0);
}*/
