/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 07:30:13 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/11 07:30:23 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}

/*
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;

	// stdout test
	printf("Stdout test:\n");
	ft_putendl_fd("Hello world", 1);
	ft_putendl_fd("", 1);
	ft_putendl_fd("42 Barcelona", 1);

	// file test
	fd = open("test_putendl_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("Error opening file\n");
		return (1);
	}

	ft_putendl_fd("Line 1", fd);
	ft_putendl_fd("Line 2", fd);
	ft_putendl_fd("Line 3", fd);

	close(fd);

	printf("Check file: test_putendl_fd.txt\n");

	return (0);
}
// */
