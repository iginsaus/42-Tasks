/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:23:20 by iginsaus          #+#    #+#             */
/*   Updated: 2024/02/05 14:05:26 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (ft_strrchr(set, s1[len]) && len)
		len--;
	return (ft_substr(s1, 0, len + 1));
}
/*
int	main(void)
{
	char	*s1 = "**??**Hola, mundo***??**???**";
	char	*set = "*?";
	char	*trm;

	printf("Original string: \"%s\"\n", s1);
	printf("Trim by: \"%s\"\n", set);
	trm = ft_strtrim(s1, set);
	if (trm == NULL)
	{
		printf("Error allocating memory for new string\n");
		return (1);
	}
	printf("New string: \"%s\"\n", trm);
	free(trm);
	return (0);
}
*/
