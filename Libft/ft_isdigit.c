/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:55:49 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/10 18:56:55 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int   ft_isdigit(int c)
{
   return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>

int main(void)
{
   char c;

   printf("Input a digit to obtain 1: ");
   scanf("%c", &c);

   printf("%d", ft_isdigit(c));
   return (0);
}
*/
