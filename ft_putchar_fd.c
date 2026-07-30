/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 07:23:18 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/11 07:23:20 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
Envía el carácter ‘c’ al descriptor de archivo
(file descriptor ) especificado.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;

	// 1) write to stdout
	printf("Output to stdout:\n");
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);

	// 2) write to a file
	fd = open("test_putchar_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("Error opening file\n");
		return (1);
	}

	ft_putchar_fd('B', fd);
	ft_putchar_fd('\n', fd);

	close(fd);

	printf("Check file: test_putchar_fd.txt\n");

	return (0);
}
// */
