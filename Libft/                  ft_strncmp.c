/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:54:17 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/30 18:05:47 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((n > i) && (s2[i] || s1[i]))
	{
		if ((s1[i] != s2[i]))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[12] = "Hola, mundo";
	char	str2[12] = "Adios, mundo";
	int		result = ft_strncmp(str1, str2, ft_strlen(str1));

	if (result == 0)
	{
		printf("strings are equal.\n");
	}
	else if (result < 0)
	{
		printf("first string smaller than second one.\n");
	}
	else
	{
		printf("first string bigger than second one.\n");
	}
	return (0);
}
*/
