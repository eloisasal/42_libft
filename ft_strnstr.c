/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 02:17:54 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/08 02:17:56 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	aux;
	size_t	ctr;
	size_t	in_ctr;

	if (*little == '\0')
		return ((char *)big);
	if (ft_strlen(big) < ft_strlen(little))
		return (NULL);
	ctr = -1;
	in_ctr = 0;
	while (big[++ctr] && ctr < len)
	{
		if (big[ctr] == little[in_ctr])
		{
			aux = ctr + in_ctr;
			while (aux < len && big[aux] != '\0'
				&& little[in_ctr] != '\0'
				&& big[aux] == little[in_ctr])
				aux = ctr + ++in_ctr;
			if (little[in_ctr] == '\0')
				return ((char *) &(big[ctr]));
			in_ctr = 0;
		}
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*str_b;
	char	*str_l;
	size_t		len;
	
	str_b = "WHATS GOING?! CAFE CON LOU!";
	str_l = "LOU";
	len = 75;
	printf("Result = %s\n\n", ft_strnstr(str_b, str_l, len));
	return (0);
}
// */
