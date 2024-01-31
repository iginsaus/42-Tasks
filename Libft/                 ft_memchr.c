/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:08:11 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/30 18:16:08 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	cs;
	size_t			i;

	ptr = (unsigned char *)s;
	cs = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (*(ptr + i) == cs)
		{
			return (ptr + i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	str[15] = "Hello friend";
	char		*ptr;

	ptr = ft_memchr(str, 'o', ft_strlen(str));
	if (ptr)
	{
		printf("First 'o' in the string is in pstn.: %lu.\n", (ptr - str) + 1);
	}
	else
	{
		printf("Character 'o' not found in string, dear friend.\n");
	}
	return (0);
}
*/
