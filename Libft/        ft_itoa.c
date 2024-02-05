/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:57:18 by iginsaus          #+#    #+#             */
/*   Updated: 2024/02/05 15:01:59 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_negative(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	ft_nlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		n_leng;

	n_leng = ft_nlen(n);
	str = malloc(sizeof(char) * n_leng + 1);
	if (!str)
		return (NULL);
	str[n_leng] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		n_leng --;
		str[n_leng] = ft_negative(n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
/*
int	main(void)
{
	int	s;

	s = 42;
	printf("Solution to evthg is: %s\n", ft_itoa (s));
}
*/
