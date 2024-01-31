/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:22:56 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/31 17:53:42 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if (len == 0 || ft_strlen(s) == 0 || ft_strlen(s) <= start)
		return (ft_strdup(""));
	i = 0;
	if (ft_strlen(s) - start > len)
		i = len + 1;
	else
		i = ft_strlen(s) - start + 1;
	substr = ft_calloc(sizeof(char), i);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, i);
	return (substr);
}
/*
int	main(void)
{
	char	s[] = "Hello, World!";
	char	*substring;

	substring = ft_substr(s, 7, 6);
	if (substring)
	{
		printf("Substring: %s\n", substring);
		free (substring);
	}
	else
	{
		printf("Error allocating memory for substring\n");
	}
	return (0);
}
*/
