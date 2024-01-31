/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:24:56 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/24 17:25:00 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set) {
  char *ret;
  size_t start, end;

  if (!s1 || !set) {
    return NULL;
  }

  start = 0;
  while (s1[start] && ft_strchr(set, s1[start])) {
    start++;
  }

  end = ft_strlen(s1) - 1;
  while (end > start && ft_strchr(set, s1[end])) {
    end--;
  }

  ret = malloc(end - start + 2);
  if (!ret) {
    return NULL;
  }

  ft_memcpy(ret, s1 + start, end - start + 1);
  ret[end - start + 1] = '\0';

  return ret;
}
/*
int main() {
  char *s1 = "    Hola, mundo   ";
  char *set = " ";
  char *ret;

  ret = ft_strtrim(s1, set);
  if (ret == NULL) {
    printf("Error allocating memory for new string\n");
    return 1;
  }

  printf("New string: %s\n", ret);

  free(ret);

  return 0;
}
*/

