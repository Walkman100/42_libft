/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:39:28 by mcarter           #+#    #+#             */
/*   Updated: 2019/05/27 11:43:13 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int i)
{
	if (i < 0)
	{
		if (-i < 0)
			return (ft_intlen(-(i / 10)) + 2);
		else
			return (ft_intlen(-i) + 1);
	}
	else if (i > 9)
		return (ft_intlen(i / 10) + 1);
	else
		return (1);
}
