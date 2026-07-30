/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 18:50:06 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/10 18:50:10 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	ft_charfinder(char in, char *set)
{
	int	ctr;

	ctr = 0;
	while (set[ctr] != '\0')
	{
		if (in == set[ctr])
			return (1);
		ctr++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (ft_charfinder(s1[start], (char *)set))
		start++;
	while (end > start && ft_charfinder(s1[end - 1], (char *)set))
		end--;
	ret = malloc(end - start + 1);
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s1 + start, end - start + 1);
	return (ret);
}
/*
#include <stdio.h>

static void	test(const char *s1, const char *set)
{
	char	*res;

	printf("s1: \"%s\" | set: \"%s\"\n",
		s1 ? s1 : "NULL",
		set ? set : "NULL");

	res = ft_strtrim(s1, set);

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
	test("hello world", "hd");
	test("42Barcelona42", "24");
	test("trim test", "t");
	test("abcXYZabc", "abc");

	// =========================
	// EDGE CASES
	// =========================
	test("", "abc");
	test("aaaaa", "a");
	test("     ", " ");
	test("ababa", "ab");

	// =========================
	// NO TRIM CASE
	// =========================
	test("libft", "xyz");

	// =========================
	// EMPTY SET
	// =========================
	test("hello", "");

	// =========================
	// BOTH EMPTY
	// =========================
	test("", "");

	// =========================
	// LONGER STRING
	// =========================
	char long_str[1000];
	for (int i = 0; i < 999; i++)
		long_str[i] = 'a';
	long_str[999] = '\0';

	test(long_str, "a");

	// =========================
	// NULL CASES (IMPORTANT)
	// =========================
	test(NULL, "abc");
	test("hello", NULL);
	test(NULL, NULL);

	return (0);
}
// */
