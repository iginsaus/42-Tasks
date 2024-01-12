/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:51:08 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/10 18:51:31 by iginsaus         ###   ########.fr       */
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
