/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 07:41:39 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/11 07:41:48 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}
/*
#include <stdio.h>
#include <string.h>

static void	test(const char *s)
{
	printf("Input: ");
	if (s)
		printf("\"%s\"", s);
	else
		printf("NULL");

	printf("\n");

	printf("ft_strlen: %zu\n", ft_strlen(s));

	//No llamamos strlen(NULL) porque es UB
	if (s)
		printf("strlen   : %zu\n", strlen(s));
	else
		printf("strlen   : (skipped, UB)\n");

	printf("\nvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv\n");
	printf("\nvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv\n");
	printf("\nvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv\n");
	s=NULL;
	printf("\"%s\"", s);
	printf("----------------------\n");
	printf("\"%zu\"", ft_strlen(s));
	printf("----------------------\n");
	printf("\"%lu\"", strlen(s));
	
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("----------------------\n");
}

int	main(void)
{
	// =========================
	// NORMAL CASES
	// =========================
	test("hello");
	test("42 Barcelona");
	test("a");
	test("");

	// =========================
	// EDGE CASES
	// =========================
	test("   spaces   ");
	test("\n\t\r");
	test("1234567890");

	// =========================
	// LONG STRING TEST
	// =========================
	char long_str[1000];
	for (int i = 0; i < 999; i++)
		long_str[i] = 'A';
	long_str[999] = '\0';

	test(long_str);

	// =========================
	// NULL CASE (IMPORTANT)
	// =========================
	test(NULL);

	return (0);
}
// */
