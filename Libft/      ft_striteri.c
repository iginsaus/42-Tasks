/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <iginsaus@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:08:20 by iginsaus          #+#    #+#             */
/*   Updated: 2024/02/01 14:35:06 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
	{
		return ;
	}
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	custom_function(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper((int)*c);
}

int	main(void)
{
	char	s[] = "Hola, mundo";

	ft_striteri(s, &custom_function);
	printf("String: %s\n", s);
	return (0);
}
*/
