/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:25:31 by iginsaus          #+#    #+#             */
/*   Updated: 2023/12/19 17:57:00 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (src[c] != '\0')
		c++;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (c);
}

#include <stdio.h>

int main() {
  char src[] = "Hola, mundo!";
  char dst[6];

  size_t len = ft_strlcpy(dst, src, sizeof(dst));

  printf("La cadena copiada es: %s\n", dst);
  printf("La longitud de la cadena original es: %zu\n", len);

  return 0;
}
