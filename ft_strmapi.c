/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:25:22 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 17:58:40 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	slen;
	char			*rtn;

	i = 0;
	slen = ft_strlen(s);
	rtn = ft_strnew(slen);
	while (i < slen)
	{
		rtn[i] = f(i, s[i]);
		i++;
	}
	return (rtn);
}
