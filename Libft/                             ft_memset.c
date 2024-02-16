/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:12:49 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/30 17:12:53 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>

int main(void)
{
  char str[] = "Bat";
	printf("Before ft_memset: ");
	printf("%s\n", str);
  ft_memset(str, 'C', 1);
	printf("After ft_memset: ");
  printf("%s\n", str);
	return (0);
}
*/
