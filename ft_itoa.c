/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:23 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/06 10:06:41 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

STR	ft_itoa(int n)
{
	STR	rtn;
	int	nlen;
	int	is_negative;

	nlen = ft_intlen(n);
	rtn = ft_strnew(nlen);
	if (!rtn)
		return (NULL);
	is_negative = (n < 0);
	if (is_negative)
	{
		rtn[0] = '-';
		rtn[nlen - 1] = -(n % 10) + '0';
		n = -(n / 10);
		nlen--;
	}
	while (nlen > (0 + is_negative))
	{
		rtn[nlen - 1] = (n % 10) + '0';
		n = n / 10;
		nlen--;
	}
	return (rtn);
}
