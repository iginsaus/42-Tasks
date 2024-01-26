/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:46:58 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/23 17:29:00 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
#include <stdio.h>

int	main(void)
{
	char	c;

	printf("Input an alphabetical character to obtain 1: ");
	scanf("%c", &c);
	printf("%d\n", ft_isalpha(c));
	return (0);
}
*/
