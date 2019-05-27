/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:43 by mcarter           #+#    #+#             */
/*   Updated: 2019/05/27 17:40:30 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	rtn;
	int	i;
	int	is_negative;

	i = 0;
	rtn = 0;
	while (!(ft_isdigit(str[i]) || str[i] == '-'))
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
			rtn *= 10;
	}
	return (rtn * is_negative);
}
