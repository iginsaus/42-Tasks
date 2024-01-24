/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:48:18 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/23 18:35:59 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s + ft_strlen(s);
	while (ptr >= s)
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
	char *str = "Hola, mundo";
	char c = 'n';
	char *ptr;
	int	n;

	ptr = ft_strrchr(str, c);
	n = ft_strlen(ptr);

	if (ptr)
	{
		printf("Character '%c' found in string '%s' back position '%d'.\n", 
		c, str, n);
	}
	else
	{
		printf("Character '%c' not found in string '%s'.\n", c, str);
	}
	return (0);
}
*/
