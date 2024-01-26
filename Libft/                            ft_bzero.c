/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:07:34 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/11 11:52:11 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n-- > 0)
	{
		*str++ = 0;
	}
}
/*
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
