/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:10:45 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/31 17:21:26 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src);
	dest = (char *)malloc(len + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	ft_memcpy(dest, src, len + 1);
	return (dest);
}
/*
int main(void)
{
    char *str1 = "Hello, friend";
    char *str2;

    str2 = ft_strdup(str1);
    printf("Original string is: %s\n", str1);
    printf("Duplicated string is: %s\n", str2);
    free(str2);
    return (0);
}
*/
