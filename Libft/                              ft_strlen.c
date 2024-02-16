/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:11:22 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/30 17:11:26 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t i = 0;

    while (s[i] != '\0')
        i++;
    return (i);
}
/*
int main(void)
{
    char *s = "Hello world";
    size_t i = ft_strlen(s);

    printf("Length of string \"%s\" is: %zu\n", s, i);
    return (0);
}
*/
