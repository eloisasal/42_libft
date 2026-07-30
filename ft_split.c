/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esasal-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:38:10 by esasal-i          #+#    #+#             */
/*   Updated: 2026/05/10 21:38:13 by esasal-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void	free_split(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

static char	*extract_word(char const *s, int *i, char c)
{
	int	start;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	return (ft_substr(s, start, *i - start));
}

static int	fill_split(char const *s, char c, char **result)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		result[j] = extract_word(s, &i, c);
		if (!result[j])
		{
			free_split(result, j - 1);
			return (0);
		}
		j++;
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*str;
	int		words;

	if (!s)
		return (NULL);
	str = (char *)s;
	words = count_words(str, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	if (!fill_split(str, c, result))
		return (NULL);
	return (result);
}
/*
int	main(void)
{
	char	**split;
	int		i;

	//=== CASE 1
	printf("CASE 1: normal sentence\n");
	split = ft_split("i dont like snake case anymore", ' ');
	i = 0;
	while (split && split[i])
		printf("%s\n", split[i++]);
	free(split);

	//=== CASE 2
	printf("\nCASE 2: multiple spaces\n");
	split = ft_split("i  really   dont    like   this", ' ');
	i = 0;
	while (split && split[i])
		printf("%s\n", split[i++]);
	free(split);

	//=== CASE 3
	printf("\nCASE 3: no delimiters\n");
	split = ft_split("libftisactuallyfun", ' ');
	i = 0;
	while (split && split[i])
		printf("%s\n", split[i++]);
	free(split);

	//=== CASE 4
	printf("\nCASE 4: only delimiters\n");
	split = ft_split("               ", ' ');
	i = 0;
	while (split && split[i])
		printf("%s\n", split[i++]);
	free(split);

	//=== CASE 5
	printf("\nCASE 5: empty string\n");
	split = ft_split("", ' ');
	i = 0;
	while (split && split[i])
		printf("%s\n", split[i++]);
	free(split);

	//=== CASE 6
	printf("\nCASE 6: underscore split\n");
	split = ft_split("i_dont_like_snake_case_but_here_we_are", '_');
	i = 0;
	while (split && split[i])
		printf("%s\n", split[i++]);
	free(split);

	//=== CASE 7
	printf("\nCASE 7: leading/trailing delimiters\n");
	split = ft_split("___42 is kinda fun___", '_');
	i = 0;
	while (split && split[i])
		printf("%s\n", split[i++]);
	free(split);

	return (0);
}// */
