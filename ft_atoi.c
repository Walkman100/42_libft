/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:43 by mcarter           #+#    #+#             */
/*   Updated: 2019/05/30 14:24:53 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	rtn;
	int	i;
	int	is_negative;

	rtn = 0;
	i = 0;
	is_negative = 1;
	while (!ft_isdigit(str[i]) && str[i] != '-')
		i++;
	if (str[i] == '-')
	{
		is_negative = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		rtn += str[i] - '0';
		i++;
		if (ft_isdigit(str[i]))
		{
			rtn *= 10;
			if (rtn < 0)
			{
				if (is_negative == 1)
					return (-1);
				else if (is_negative == -1)
					return (0);
			}
		}
	}
	return (rtn * is_negative);
}
