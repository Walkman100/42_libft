/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:43 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/11 13:13:28 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_atol_delegate(const char *str, int i, int is_negative)
{
	long	rtn;

	rtn = 0;
	while (ft_isdigit(str[i]))
	{
		rtn += str[i] - '0';
		i++;
		if (ft_isdigit(str[i]))
		{
			rtn *= 10;
			if (rtn < 0)
			{
				if (is_negative == -1)
					return (0);
			}
		}
	}
	return (rtn * is_negative);
}

long		ft_atol(const char *str)
{
	int	i;
	int	is_negative;

	i = 0;
	is_negative = 1;
	while (ft_iswhitespace(str[i]) && str[i] != '-')
	{
		if (str[i] == 27)
			return (0);
		i++;
	}
	if (str[i] == '-')
	{
		is_negative = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	return (ft_atol_delegate(str, i, is_negative));
}
