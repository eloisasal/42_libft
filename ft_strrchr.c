/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 00:40:12 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/08 00:40:13 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" /*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>//*/

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*ret;
	int				match;
	int				counter;

	match = -1;
	counter = 0;
	ret = (unsigned char *) s;
	while (ret[counter])
	{
		if ((unsigned char) ret[counter] == (unsigned char) c)
			match = counter;
		counter++;
	}
	if ('\0' == (unsigned char) c)
		match = counter;
	if (match == -1)
		return (NULL);
	return ((char *)&ret[match]);
}
/*
int	main(void)
{
	char	*str;

	str = malloc(30);
	strcpy(str, "YO! hello! world! great!");
	printf("last match = %s\n", ft_strrchr(str, '!'));
	return (0);
}
// */
