/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:28:10 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/24 17:28:15 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd) {
  if (!s) {
    return;
  }

  write(fd, s, ft_strlen(s));
  write(fd, "\n", 1);
}
/*
int main (void)
{
	ft_putendl_fd("Adios Mundo Cruel", 1);
	return (0);
}
*/

