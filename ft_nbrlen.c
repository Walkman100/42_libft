/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:39:28 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/10 10:06:38 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(MAXNBR i)
{
	if (i < 0)
	{
		if (-i < 0)
			return (ft_nbrlen(-(i / 10)) + 2);
		else
			return (ft_nbrlen(-i) + 1);
	}
	else if (i > 9)
		return (ft_nbrlen(i / 10) + 1);
	else
		return (1);
}
