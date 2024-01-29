/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:27:47 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/24 17:27:49 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd) {
    if (!s) {
        return;
    }

    write(fd, s, ft_strlen(s));
}
/*
int main() {
    ft_putstr_fd("Hola, mundo", 1);
    return 0;
}
*/

