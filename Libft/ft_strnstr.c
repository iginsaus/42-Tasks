/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:30:54 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/12 14:04:24 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

#include <string.h>
#include <stdio.h>

int main() 
{
  char haystack[9] = "Nora zoaz";
  char needle[3] = "oaz";

  char *result = ft_strnstr(haystack, needle, strlen(haystack));

  if (result) {
    printf("ft_strnstr() has found '%s' in string '%s'.\n", needle, haystack);
    printf("substring poisition is  %lu in the string.\n", (result - haystack)+1);
  } else {
    printf("ft_strnstr() unable to find '%s' in string '%s'.\n", needle, haystack);
  }

  return (0);
}
