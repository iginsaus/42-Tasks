/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 08:35:48 by iginsaus          #+#    #+#             */
/*   Updated: 2023/12/14 09:08:53 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int   ft_isalpha(int c)
{
   return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
#include <stdio.h>

int main(void)
{
   char c;

   printf("Input an alphabetical character to obtain 1: ");
   scanf("%c", &c);

   printf("%d", ft_isalpha(c));
   return (0);
}
*/
