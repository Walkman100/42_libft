/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:25:22 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/06 09:46:15 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

STR	ft_strmapi(const STR s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	slen;
	STR				rtn;

	if (!s)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	rtn = ft_strnew(slen);
	if (!rtn)
		return (NULL);
	while (i < slen)
	{
		rtn[i] = f(i, s[i]);
		i++;
	}
	return (rtn);
}
