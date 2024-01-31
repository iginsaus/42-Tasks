/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:41:39 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/31 16:44:09 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		str;
	int			i;

	str = c;
	i = 0;
	while (s[i] != str)
	{
		if (s[i] == 0)
			return (NULL);
		i++;
	}
	return ((char *)&s[i]);
}
/*
int	main(void)
{
	char	*str = "Hello, friend";
	char	c = 'o';
	char	*ptr;

	ptr = ft_strchr(str, c);
	if (ptr)
	{
		printf("Character '%c' found in string '%s', in position '%ld'\n",
			c, str, (ptr - str) + 1);
	}
	else
	{
		printf("Character '%c' not not found in string '%s'.\n", c, str);
	}
	return (0);
}
*/
