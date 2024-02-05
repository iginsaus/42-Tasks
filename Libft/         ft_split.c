/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:08:00 by iginsaus          #+#    #+#             */
/*   Updated: 2024/02/05 14:58:49 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *str, char c)
{
	int	i;
	int	count_words;

	i = 0;
	count_words = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			count_words++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count_words);
}

static void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free (str[i]);
		i++;
	}
	free (str);
}

static int	ft_fillwords(char const *str, char c, char **matrix)
{
	int	matrix_index;
	int	start;
	int	end;

	matrix_index = 0;
	end = 0;
	while (ft_countwords(str, c) > matrix_index)
	{
		start = end;
		while (str[start] == c)
			start++;
		end = start;
		while (str[end] != c && str[end] != '\0')
			end++;
		matrix[matrix_index] = ft_substr(str, start, (end - start));
		if (!matrix[matrix_index])
		{
			ft_free(matrix);
			return (0);
		}
		matrix_index++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;

	if (!s)
		return (NULL);
	matrix = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!matrix)
		return (NULL);
	matrix[ft_countwords(s, c)] = NULL;
	if (ft_fillwords(s, c, matrix) == 0)
		return (NULL);
	return (matrix);
}
/*
int	main(void)
{
	char	*s = "Hola, mundo, hola";
	char	**arr;
	int		i;

	arr = ft_split(s, ',');
	if (arr == NULL)
	{
		printf("Error allocating memory for array\n");
		return (1);
	}
	i = 0;
	while (arr[i])
	{
		printf("Subcadena %d: %s\n", i, arr[i]);
		i++;
	}
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
*/
