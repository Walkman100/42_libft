/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:25:18 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/06 09:45:56 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

STR	ft_strmap(const STR s, char (*f)(char))
{
	int	i;
	int	slen;
	STR	rtn;

	if (!s)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	rtn = ft_strnew(slen);
	if (!rtn)
		return (NULL);
	while (i < slen)
	{
		rtn[i] = f(s[i]);
		i++;
	}
	return (rtn);
}
