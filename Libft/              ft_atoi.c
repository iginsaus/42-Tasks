/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:11:08 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/23 17:16:44 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (str[0] == ' ' || (str[0] >= 9 && str[0] <= 13))
		str++;
	if (str[0] == '+')
	{
		str++;
	}
	else if (str[0] == '-')
	{
		sign = -1;
		str++;
	}
	while (str[0] != '\0' && str[0] >= '0' && str[0] <= '9')
	{
		num = num * 10 + str[0] - '0';
		str++;
	}
	return (num * sign);
}
/*
#include <stdio.h>

int main() 
{
  char str[6] = "123456";

  int result = ft_atoi(str);

  printf("El número convertido es: %d\n", result);

  return (0);
}
*/
