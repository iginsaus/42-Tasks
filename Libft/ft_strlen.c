/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:01:54 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/10 19:02:10 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s;
	size_t	i;

	s[10] = "Hola Mundo";
	i = ft_strlen(s);
	printf("Length of string \"Hola Mundo\" is: %zu\n", i);
	return (0);
}
*/
