/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 09:09:45 by iginsaus          #+#    #+#             */
/*   Updated: 2023/12/14 10:04:35 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int   ft_isdigit(int c)
{
   return (c >= '0' && c <= '9');
}

#include <stdio.h>
/*
int main(void)
{
   char c;

   printf("Input a digit to obtain 1: ");
   scanf("%c", &c);

   printf("%d", ft_isdigit(c));
   return (0);
}
*/
