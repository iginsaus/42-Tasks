/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:27:21 by iginsaus          #+#    #+#             */
/*   Updated: 2024/01/24 17:27:28 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <stdio.h>

int	main(void)
{
	FILE	*fp;

	fp = fopen("test.txt", "w");
	if (fp == NULL)
	{
		perror("Error opening file");
		return (1);
	}
	fprintf(fp, "a\n");
	fprintf(fp, "b\n");
	fprintf(fp, "c\n");
	fclose(fp);
	return (0);
}
*/
