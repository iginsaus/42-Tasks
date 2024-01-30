/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:20:46 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/30 17:20:52 by iginsaus         ###   ########.fr       */
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
/*
int	main(void)
{
	char	src[10] = "Bye World!";
	char	dst[4];
	size_t	len = ft_strlcpy(dst, src, sizeof(dst));

	printf("La cadena copiada es: %s\n", dst);
	printf("La longitud de la cadena original es: %zu\n", len);
	return (0);
}
*/
