/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 18:02:56 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/10 18:02:59 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ret;
	int		length;
	int		counter;

	counter = 0;
	length = ft_strlen(s);
	ret = malloc(length + 1);
	if (ret == NULL)
		return (ret);
	while (counter < length)
	{
		ret[counter] = s[counter];
		counter++;
	}
	ret[counter] = '\0';
	return (ret);
}
/*
int	main(void)
{
	char	*str;
	char	*dup;
	
	str = malloc(110);
	strcpy(str, "fuck it all");
	dup = strdup(str);
	printf("Original = %s\n", str);
	printf("Duplicate = %s\n", dup);
	printf("Same? => %d\n", strcmp(str, dup));
	return (0);
}
// */
