/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:17:32 by iginsaus          #+#    #+#             */
/*   Updated: 2023/12/19 17:48:39 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    char *p = s;

    while (n--)
        *p++ = 0;
}
/*
#include <stdio.h>

int main(void)
{
    char str[11] = "Hello World";
    int i = 0;

    ft_bzero(str, 3);

    while (i < 11)
    {
        printf("%c", str[i]);
        i++;
    }

    return (0);
}
*/
