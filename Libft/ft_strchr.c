/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:07:54 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/11 15:19:25 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

#include <stdio.h>

int main(void)
{
	char *str = "Hola, mundo";
	char c = 'o';
	char *ptr;

	ptr = ft_strchr(str, c);

	if (ptr)
		printf("Character '%c' found in string '%s', in position '%ld'\n", c, str, (ptr - str)+1); 
	else
		printf("Character '%c' not not found in string '%s'.\n", c, str);

	return (0);
}
