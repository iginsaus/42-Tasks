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
	size_t	i;
	size_t	c;

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
int main(void)
{
  char src[] = "Hello world!";
  char dst[6];

  size_t len = ft_strlcpy(dst, src, sizeof(dst));

  printf("Copied string is: %s\n", dst);
  printf("Length of original string is: %zu\n", len);
	printf("Original string was: %s\n", src);

  return (0);
}
*/
