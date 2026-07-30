/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 18:41:46 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/10 18:41:47 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		ctr;
	int		len1;
	int		len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ret = malloc(len1 + len2 + 1);
	if (ret == NULL)
		return (ret);
	ctr = 0;
	ft_strlcpy(ret, s1, len1 + 1);
	while (ctr < len2)
	{
		ret[len1 + ctr] = s2[ctr];
		ctr++;
	}
	ft_strlcpy(&(ret[len1]), s2, len2 + 1);
	return (ret);
}
/*
#include <stdio.h>
#include <string.h>

static void	test_case(const char *s1, const char *s2)
{
	char	*res;

	printf("s1: \"%s\" | s2: \"%s\"\n",
		s1 ? s1 : "NULL",
		s2 ? s2 : "NULL");

	res = ft_strjoin(s1, s2);

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
	test_case("Hello", "World");
	test_case("42", "Barcelona");
	test_case("", "test");
	test_case("test", "");

	// =========================
	// EDGE CASES (important in 42)
	// =========================
	test_case("", "");
	test_case("a", "b");

	// =========================
	// STRESS CASE
	// =========================
	char *long1 = malloc(1000);
	char *long2 = malloc(1000);

	if (long1 && long2)
	{
		memset(long1, 'A', 999);
		long1[999] = '\0';

		memset(long2, 'B', 999);
		long2[999] = '\0';

		test_case(long1, long2);
	}

	free(long1);
	free(long2);

	// =========================
	// NULL CASES (IMPORTANT)
	// =========================
	test_case(NULL, "test");
	test_case("test", NULL);
	test_case(NULL, NULL);

	return (0);
}
// */
