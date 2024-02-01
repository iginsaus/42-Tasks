/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:18:24 by iginsaus          #+#    #+#             */
/*   Updated: 2024/02/01 12:35:38 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", ft_strlen("-2147483648"));
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	while (n > 0)
	{
		c = n % 10 + '0';
		write(fd, &c, 1);
		n /= 10;
	}
}
/*
int	main(void)
{
	int	fd = 1;
	int	n = -2147483648;

	ft_putnbr_fd(n, fd);
	printf("\n");
	return (0);
}
*/
