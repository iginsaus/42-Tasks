/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:37:55 by iginsaus          #+#    #+#             */
/*   Updated: 2024/02/05 15:10:32 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	i = 0;
	if (!s || !f)
	{
		return (NULL);
	}
	new_str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
	{
		return (NULL);
	}
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	my_function(unsigned int i, char c)
{
	return (c + (char)i);
}
/*
int	main(void)
{
	char	*s = "Hello, world";
	char	*new_str;

	new_str = ft_strmapi(s, (char (*)(unsigned int, char)) & my_function);
	if (new_str == NULL)
	{
		printf("Error allocating memory\n");
		return (1);
	}
	printf("Original string: %s\n", s);
	printf("New string: %s\n", new_str);
	free(new_str);
	return (0);
}
*/
