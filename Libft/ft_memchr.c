/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:29:55 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/12 12:39:27 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	cs;
	size_t			i;

	ptr = (unsigned char *)s;
	cs = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (*(ptr + i) == cs)
		{
			return (ptr + i);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main() 
{
  const char str[] = "Adios Mundo Cruel";
  char *ptr;

  ptr = ft_memchr(str, 'o', ft_strlen(str));

  if (ptr) {
    printf("First 'o' in the string is in position: %lu.\n", (ptr - str)+1);
  } else {
    printf("Character 'o' not found in string, dear friend.\n");
  }

  return (0);
}
