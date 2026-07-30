/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 18:16:41 by esasal-i		  #+#	#+#	      */
/*   Updated: 2026/05/17 22:13:50 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	ret = malloc(len + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
/*
#include <stdio.h>

static void	test(const char *s, unsigned int start, size_t len)
{
	char	*res;

	printf("s: \"%s\" | start: %u | len: %zu\n",
		s ? s : "NULL", start, len);

	res = ft_substr(s, start, len);

	if (res)
	{
		printf("result: \"%s\"\n", res);
		free(res);
	}
	else
	{
		printf("result: NULL\n");
	}

	printf("----------------------\n");
}

int	main(void)
{
	// =========================
	// NORMAL CASES
	// =========================
	test("hello world", 0, 5);
	test("hello world", 6, 5);
	test("42Barcelona", 2, 4);
	test("libft", 1, 3);

	// =========================
	// EDGE CASES
	// =========================
	test("hello", 10, 3);        // start > len
	test("hello", 5, 10);        // start == len
	test("", 0, 10);             // empty string
	test("", 5, 10);             // empty + out of range

	// =========================
	// FULL STRING CASE
	// =========================
	test("substring", 0, 100);    // len bigger than string

	// =========================
	// SINGLE CHAR CASE
	// =========================
	test("a", 0, 1);
	test("a", 0, 0);

	// =========================
	// NULL CASE (IMPORTANT)
	// =========================
	test(NULL, 0, 5);

	return (0);
}
// */
