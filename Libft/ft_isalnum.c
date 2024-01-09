/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:06:18 by iginsaus          #+#    #+#             */
/*   Updated: 2023/12/14 10:32:06 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int   ft_isalnum(int c)
{
   return ((c >= 'a' && c <= 'z') ||
   (c >= 'A' && c <= 'Z') ||
   (c >= '0' && c <= '9'));
}
/*
#include <stdio.h>

int main(void)
{
   char c;

   printf("Input an alphanumeric character to obtain 1: ");
   scanf("%c", &c);

   printf("%d", ft_isalnum(c));
   return (0);
}
*/
