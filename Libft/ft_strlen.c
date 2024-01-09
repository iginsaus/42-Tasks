/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:11:00 by iginsaus          #+#    #+#             */
/*   Updated: 2023/12/14 11:27:40 by iginsaus         ###   ########.fr       */
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

int  main()
{
   char    s[10] = "Hola Mundo";
   size_t   i;

   i = ft_strlen(s);

   printf("Length of string \"Hola Mundo\" is: %zu\n", i);

   return (0);
}
*/
