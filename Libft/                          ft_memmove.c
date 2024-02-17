/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:18:01 by iginsaus          #+#    #+#             */
/*   Updated: 2024/02/05 15:31:32 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len)
	{
		if (dst < src)
		{
			while (i < len)
			{
				((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
				i++;
			}
		}
		else if (src < dst)
		{
			while (len --)
				((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	return (dst);
}
/*
int main(void)
{
    char src[18] = "ft_memmove example";
    char dst[25] = "           no overlapping";
    
		printf("Source src: %s\n", src);
    ft_memmove(dst, src, 10);
    
    printf("Brought to dst: %s\n", dst);
    
    return (0);
}
*/

