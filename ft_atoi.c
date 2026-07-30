/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 02:53:52 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/19 08:32:55 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * result);
}
/*
#include <stdio.h>
int	main(void)
{
	const char *tests[] =
	{
		"42",
		"   42",
		"\t\n\v\f\r  -42",
		"+42",
		"-42",
		"000123",
		"   +0",
		"   -0",
		"123abc",
		"   +123 456",
		"",
		"   ",
		"+",
		"-",
		"2147483647",
		"-2147483648",
		NULL
	};

	for (int i = 0; tests[i] != NULL; i++)
	{
		printf("Input: \"%s\"\n", tests[i]);
		printf("ft_atoi: %d\n", ft_atoi(tests[i]));
		printf("----------------------\n");
	}

	return (0);
} // */
