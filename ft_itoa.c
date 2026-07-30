/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 11:06:13 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/18 11:06:15 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

static int	ft_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_fill(char *str, long nb, int len)
{
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;
	len = ft_len(nb);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	ft_fill(str, nb, len);
	return (str);
}
/*
int	main(void)
{
	char	*nbr;
	int		ctr;
	int		ret;
	
	ctr = 0;
	ctr++;
	ret = strcpy(nbr, "0123456789");
	printf("%d - %s => %d\n", ctr, nbr, ret);
	ctr++;
	ret = strcpy(nbr, "-123");
	printf("%d - %s => %d\n", ctr, nbr, ret);
	ctr++;
	ret = strcpy(nbr, "abc");
	printf("%d - %s => %d\n", ctr, nbr, ret);
	ctr++;
	ret = strcpy(nbr, "as0123as45d6789");
	printf("%d - %s => %d\n", ctr, nbr, ret);
	ctr++;
	ret = strcpy(nbr, "-assd99");
	printf("%d - %s => %d\n", ctr, nbr, ret);
	return (0);
} // */
