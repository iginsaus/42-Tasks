/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:23:10 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/24 17:23:32 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  if (!s) 
  {
    return (NULL);
  }

  if (start >= ft_strlen(s)) 
  {
    return ft_strdup("");
  }

  if (len > ft_strlen(s) - start) 
  {
    len = ft_strlen(s) - start;
  }

  char *substr = malloc(len + 1);
  if (!substr) 
  {
    return (NULL);
  }

  strncpy(substr, s + start, len);
  substr[len] = '\0';

  return (substr);
}
/*
char *ft_substr(char const *s, unsigned int start, size_t len);

int main() {
  char s[] = "Hello, World!";
  char *substring;

  substring = ft_substr(s, 7, 6);
  if (substring) {
    printf("Substring: %s\n", substring);
    free(substring);
  } else {
    printf("Error allocating memory for substring\n");
  }

  return 0;
}
*/
