/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:43 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/11 12:17:34 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi_delegate(const char *str, int i, int is_negative)
{
	int	rtn;

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

static int	ft_atoi_is_ignore(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' ||
			c == '\n' || c == '\r' || c == '\f')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int	i;
	int	is_negative;

	i = 0;
	is_negative = 1;
	while (ft_atoi_is_ignore(str[i]) && str[i] != '-')
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
	return (ft_atoi_delegate(str, i, is_negative));
}
