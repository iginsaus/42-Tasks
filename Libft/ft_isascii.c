/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:33:09 by iginsaus          #+#    #+#             */
/*   Updated: 2023/12/14 10:52:59 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  ft_isascii(int c)
{
  return (c >= 0 && c <= 127);
}	
/*
#include <stdio.h>

int main(void)
{
   char c;

   printf("Input an ascii character to obtain 1: ");
   scanf("%c", &c);

   printf("%d", ft_isascii(c));
   return (0);
}
*/
