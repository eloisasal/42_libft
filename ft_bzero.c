/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:45:59 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/04 15:46:02 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*int     main(void)
{
        char    *str;

        str = malloc(30);
        strcpy(str, "liudfashkldasjkfhaslkdjhn"); //25
        ft_bzero(str, 5);
        printf("%s\n", str);
        ft_bzero(str, 15);
        printf("%s\n", str);
        ft_bzero(str, 24);
        printf("%s\n", str);
        return (0);
}
*/
