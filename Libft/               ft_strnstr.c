/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:04:07 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/31 16:18:26 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	haystack[] = "Nora zoaz zu";
	char	needle[] = "oaz";

	char	*result = ft_strnstr(haystack, needle, strlen(haystack));
	if (result)
	{
		printf("ft_strnstr() has found '%s' in string '%s'.\n",
			needle, haystack);
		printf("substring poisition is  %lu in the string.\n",
			(result - haystack) + 1);
		printf("result is %s", result);
	}
	else
	{
		printf("ft_strnstr() unable to find '%s' in string '%s'.\n",
			needle, haystack);
	}
	return (0);
}
*/
