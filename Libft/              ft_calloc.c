/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:59:24 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/31 17:08:09 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rme;

	rme = malloc(size * count);
	if (!rme)
	{
		return (NULL);
	}
	else
	{
		ft_bzero(rme, size * count);
	}
	return (rme);
}
/*
int	main(void)
{
	size_t	count = 5;
	size_t	size = sizeof(int);
	int		*arr = (int *)ft_calloc(count, size);

	size_t	i = 0;
	while (i < count)
	{
		printf("%d ", arr[i]);
		i++;
	}
	free (arr);
	return (0);
}
*/
