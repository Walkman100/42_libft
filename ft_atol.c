/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:43 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/16 00:07:40 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const STR s)
{
	int		is_negative;
	long	rtn;

	is_negative = 1;
	while (ft_iswhitespace(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			is_negative = -1;
		s++;
	}
	rtn = 0;
	while (ft_isdigit(*s))
	{
		rtn *= 10;
		if (rtn < 0 && is_negative == -1)
			return (0);
		rtn += *s - '0';
		s++;
	}
	return (rtn * is_negative);
}
