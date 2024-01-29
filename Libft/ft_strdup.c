/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:32:39 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/11 17:32:44 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *src)
{
    char *dest;
    size_t len;

    len = ft_strlen(src);
    dest = (char *)malloc(len + 1);
    if (dest == NULL)
        return (NULL);
    ft_memcpy(dest, src, len + 1);
    return (dest);
}
/*
int main()
{
    char *str1 = "Hola, mundo";
    char *str2;

    str2 = ft_strdup(str1);
    printf("%s\n", str2);
    free(str2);
    return (0);
}
*/

