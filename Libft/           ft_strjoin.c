/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:10:16 by iginsaus          #+#    #+#             */
/*   Updated: 2024/02/05 13:21:07 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new_str;
	size_t		len1;
	size_t		len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_str = malloc(len1 + len2 + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, s1);
	strcat(new_str, s2);
	return (new_str);
}
/*
int	main(void)
{
	char	*s1 = "Hola";
	char	*s2 = ", mundo";
	char	*new_str;

	new_str = ft_strjoin(s1, s2);
	if (new_str == NULL)
	{
		printf("Error allocating memory for new string\n");
		return (1);
	}
	printf("New string: %s\n", new_str);
	free(new_str);
	return (0);
}
*/
