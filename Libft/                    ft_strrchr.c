/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:49:38 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/31 16:51:08 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		str;
	char		*end;
	int			i;

	str = c;
	i = 0;
	end = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == str)
			end = (char *)&s[i];
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (end);
}
/*
int	main(void)
{
	char	*str = "Hello, friend";
	char	c = 'i';
	char	*ptr;
	int		n;

	ptr = ft_strrchr(str, c);
	n = ft_strlen(ptr);
	if (ptr)
	{
		printf("Character '%c' found in string '%s' back position '%d'.\n",
			c, str, n);
	}
	else
	{
		printf("Character '%c' not found in string '%s'.\n", c, str);
	}
	return (0);
}
*/
