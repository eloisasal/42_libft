/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 00:29:30 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/08 00:29:31 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/

char	*ft_strchr(const char *s, int c)
{
	char	*dup;

	dup = (char *) s;
	while (*dup)
	{
		if (*dup == (char)c)
			return ((char *)dup);
		dup++;
	}
	if (*dup == (char)c)
		return ((char *)dup);
	return (NULL);
}
/*int	main(void)
{
	char	*str;

	str = malloc(30);
	strcpy(str, "YO! hello! world! great!");
	printf("first match = %s\n", ft_strchr(str, '!'));
	return (0);
}
// */
