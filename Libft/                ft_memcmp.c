/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:56:47 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/31 16:19:48 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;
	size_t				i;

	i = 0;
	str1 = s1;
	str2 = s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[7] = "Hola 42";
	char	str2[7] = "Hola 42";

	int		result = ft_memcmp(str1, str2, strlen(str1));
	if (result == 0)
	{
		printf("Both strings are equal - Succesful comparison.\n");
	}
	else
	{
		printf("Strings comparison failed. Sorry! my friend.\n");
	}
	return (0);
}
*/
