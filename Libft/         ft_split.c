/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:25:16 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/24 17:25:34 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c) {
  char **arr;
  size_t i, start, len;

  if (!s) {
    return NULL;
  }

  i = 0;
  while (s[i] == c) {
    i++;
  }

  if (s[i] == '\0') {
    return (char **)malloc(sizeof(char *) * 1);
  }

  start = i;
  len = 1;

  while (s[i]) {
    if (s[i] == c) {
      arr = (char **)realloc(arr, sizeof(char *) * (len + 1));
      if (!arr) {
        return NULL;
      }

      arr[len - 1] = ft_substr(s, start, i - start);
      if (!arr[len - 1]) {
        return NULL;
      }

      start = i + 1;
      len++;
    }
    i++;
  }

  arr = (char **)realloc(arr, sizeof(char *) * (len + 1));
  if (!arr) {
    return NULL;
  }

  arr[len - 1] = ft_substr(s, start, i - start);
  if (!arr[len - 1]) {
    return NULL;
  }

  return arr;
}
/*
int main() {
  char *s = "Hola, mundo, hola";
  char **arr;
  int i;

  arr = ft_split(s, ',');
  if (arr == NULL) {
    printf("Error allocating memory for array\n");
    return 1;
  }

  for (i = 0; arr[i]; i++) {
    printf("Subcadena %d: %s\n", i, arr[i]);
  }

  for (i = 0; arr[i]; i++) {
    free(arr[i]);
  }
  free(arr);

  return 0;
}
*/
