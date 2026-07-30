/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 07:06:50 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/11 07:06:52 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	ctr;
	char			*ret;

	if (!s || !f)
		return (NULL);
	ctr = 0;
	ret = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ret)
		return (NULL);
	while (s[ctr])
	{
		ret[ctr] = f(ctr, s[ctr]);
		ctr++;
	}
	ret[ctr] = '\0';
	return (ret);
}
/*
#include <stdio.h>

// =========================
// funciones de prueba
// =========================

static char	to_upper_alt(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static char	shift_index(unsigned int i, char c)
{
	return (c + i);
}

static char	identity(unsigned int i, char c)
{
	(void)i;
	return (c);
}

int	main(void)
{
	char	*res;

	// =========================
	// TEST 1: normal lowercase -> uppercase
	// =========================
	printf("TEST 1\n");
	res = ft_strmapi("hello world", to_upper_alt);
	printf("%s\n", res);
	free(res);

	// =========================
	// TEST 2: index shift
	// =========================
	printf("TEST 2\n");
	res = ft_strmapi("abcd", shift_index);
	printf("%s\n", res);
	free(res);

	// =========================
	// TEST 3: identity function
	// =========================
	printf("TEST 3\n");
	res = ft_strmapi("42Barcelona", identity);
	printf("%s\n", res);
	free(res);

	// =========================
	// TEST 4: empty string
	// =========================
	printf("TEST 4\n");
	res = ft_strmapi("", to_upper_alt);
	printf("%s\n", res);
	free(res);

	// =========================
	// TEST 5: NULL string (edge case)
	// =========================
	printf("TEST 5 (NULL string)\n");
	res = ft_strmapi(NULL, to_upper_alt);
	if (!res)
		printf("OK: NULL returned\n");
	else
		free(res);

	// =========================
	// TEST 6: NULL function
	// =========================
	printf("TEST 6 (NULL function)\n");
	res = ft_strmapi("test", NULL);
	if (!res)
		printf("OK: NULL returned\n");
	else
		free(res);

	return (0);
}
// */
