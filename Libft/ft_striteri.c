/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:26:38 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/24 17:26:41 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *)) {
  unsigned int i = 0;

  if (!s || !f) {
    return;
  }

  while (s[i]) {
    f(i, &s[i]);
    i++;
  }
}
/*
void custom_function(unsigned int i, char *c) {
  (void)i; // To suppress the unused parameter warning
  *c = ft_toupper((int)*c);
}

int main() {
  char s[] = "Hola, mundo";

  ft_striteri(s, &custom_function);

  printf("String: %s\n", s);

  return 0;
}
*/

