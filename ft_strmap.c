/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:25:18 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 17:44:16 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		slen;
	char	*rtn;

	i = 0;
	slen = ft_strlen(s);
	rtn = ft_strnew(slen);
	while (i < slen)
	{
		rtn[i] = f(s[i]);
		i++;
	}
	return (rtn);
}
