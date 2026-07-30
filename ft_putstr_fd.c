/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 07:28:46 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/11 07:28:47 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
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

	ft_putstr_fd("Hello world", 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("42 Barcelona", 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("", 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd(NULL, 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("Test with numbers 12345", 1);
	ft_putchar_fd('\n', 1);

	// =========================
	// TEST 2: file output
	// =========================
	fd = open("test_putstr_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("Error opening file\n");
		return (1);
	}

	ft_putstr_fd("Line 1\n", fd);
	ft_putstr_fd("Line 2\n", fd);
	ft_putstr_fd("Line 3\n", fd);
	ft_putstr_fd("", fd);

	close(fd);

	printf("Check file: test_putstr_fd.txt\n");

	return (0);
}
// */
