/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:00:37 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/10 19:01:00 by iginsaus         ###   ########.fr       */
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
