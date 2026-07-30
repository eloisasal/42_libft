/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 07:31:05 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/11 07:31:22 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
/*
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;

	// =========================
	// TEST 1: stdout (visual)
	// =========================
	printf("STDOUT tests:\n");

	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-42, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(1000000, 1);
	ft_putchar_fd('\n', 1);

	// =========================
	// TEST 2: file output
	// =========================
	fd = open("test_putnbr_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("Error opening file\n");
		return (1);
	}

	ft_putnbr_fd(123456789, fd);
	ft_putchar_fd('\n', fd);

	ft_putnbr_fd(-987654321, fd);
	ft_putchar_fd('\n', fd);

	ft_putnbr_fd(0, fd);
	ft_putchar_fd('\n', fd);

	close(fd);

	printf("Check file: test_putnbr_fd.txt\n");

	return (0);
}
// */
