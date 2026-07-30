/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 17:39:52 by esasal-i          #+#    #+#             */
/*   Updated: 2026/07/30 17:43:22 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// To execute the tester use the following lines
// cc tester.c -I. libft.a -o tester.out
// ./tester.out

int	main(void)
{
	char	*hwt = "Hello world! Test";
	char	c = '4';
	int	n = 2;
	char	aux_c;
	int	aux_n;

	aux_c = n + '0';
	aux_n = (int) c - '0';
	printf("----%d%c----\n", aux_n, aux_c);
	printf("First test = %s, the length is %d", hwt, (int) ft_strlen(hwt));
	return (0);
}
