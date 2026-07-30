/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 07:18:09 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/11 07:18:10 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

static void	to_upper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

static void	replace_by_index(unsigned int i, char *c)
{
	*c = '0' + (i % 10);
}

int	main(void)
{
	char	str1[] = "hello world";
	char	str2[] = "libft test 123";
	char	str3[] = "edge CASES!";
	char	*null_str = NULL;

	// =========================
	// TEST 1: normal uppercase
	// =========================
	printf("TEST 1: to_upper\n");
	ft_striteri(str1, to_upper);
	printf("%s\n", str1);

	// =========================
	// TEST 2: replace by index
	// =========================
	printf("TEST 2: replace_by_index\n");
	ft_striteri(str2, replace_by_index);
	printf("%s\n", str2);

	// =========================
	// TEST 3: mixed chars
	// =========================
	printf("TEST 3: mixed case\n");
	ft_striteri(str3, to_upper);
	printf("%s\n", str3);

	// =========================
	// TEST 4: empty string
	// =========================
	printf("TEST 4: empty string\n");
	char	empty[] = "";
	ft_striteri(empty, to_upper);
	printf("%s\n", empty);

	// =========================
	// TEST 5: NULL string (edge case)
	// =========================
	printf("TEST 5: NULL string (should NOT crash)\n");
	ft_striteri(null_str, to_upper);
	printf("No crash\n");

	// =========================
	// TEST 6: NULL function
	// =========================
	printf("TEST 6: NULL function (should NOT crash)\n");
	ft_striteri(str1, NULL);
	printf("No crash\n");

	return (0);
}
// */
