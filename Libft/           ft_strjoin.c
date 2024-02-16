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
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
/*
int main(void) 
{
  char *s1 = "Hello ";
  char *s2 = "world";
  char *new_str;

  new_str = ft_strjoin(s1, s2);
  if (new_str == NULL) 
	{
    printf("Error allocating memory for new string\n");
    return (1);
  }

  printf("First string: %s\n", s1);
	printf("Second string: %s\n", s2);
	printf("New string joining: %s\n", new_str);

  free(new_str);

  return (0);
}
*/
