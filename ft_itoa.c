/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:23 by mcarter           #+#    #+#             */
/*   Updated: 2019/05/30 09:57:08 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*rtn;
	int		nlen;
	int		is_negative;

	nlen = ft_intlen(n);
	rtn = ft_strnew(nlen + 1);
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
