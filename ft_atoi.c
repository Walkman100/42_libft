/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:43 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/14 16:24:19 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	is_negative;
	int	rtn;

	is_negative = 1;
	while (ft_iswhitespace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative = -1;
		str++;
	}
	rtn = 0;
	while (ft_isdigit(*str))
	{
		rtn *= 10;
		if (rtn < 0)
			if (is_negative == -1)
				return (0);
		rtn += str[i] - '0';
		str++;
	}
	return (rtn * is_negative);
}
