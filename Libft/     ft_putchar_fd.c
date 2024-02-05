/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:20:37 by iginsaus          #+#    #+#             */
/*   Updated: 2024/02/01 13:29:43 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
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
