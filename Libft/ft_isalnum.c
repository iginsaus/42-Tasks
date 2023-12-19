/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:06:18 by iginsaus          #+#    #+#             */
/*   Updated: 2023/12/19 17:10:11 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)

int	ft_isalnum(int c)
{
	if (ft_isalpha(int c) || ft_isdigit(int c))
	{
		return (1);
	}
	else
	{	
		return (0);
	}
}
