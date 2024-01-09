/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:56:48 by iginsaus          #+#    #+#             */
/*   Updated: 2023/12/14 11:09:46 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  ft_isprint(int c)
{
  return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>

int main(void)
{
   char c;

   printf("Input a printable character to obtain 1: ");
   scanf("%c", &c);

   printf("%d", ft_isprint(c));
   return (0);
}
*/
