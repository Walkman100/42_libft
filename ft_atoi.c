/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:43 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/16 00:07:29 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const STR s)
{
	int	is_negative;
	int	rtn;

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
