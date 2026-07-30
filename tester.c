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

// To execute the tester use the following lines
// cc tester.c -I. libft.a -o tester.out
// ./tester.out

int	main(void)
{
	char	*hwt = "Hello world! Test";

	printf("First test = %s, the length is %d", hwt, (int) ft_strlen(hwt));
	return (0);
}
