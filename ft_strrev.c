/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:04:36 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/11 13:43:06 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

STR	ft_strrev(STR s)
{
	int		i;
	int		slen;
	char	tmp;

	i = 0;
	slen = ft_strlen(s);
	while (i < slen / 2)
	{
		tmp = s[i];
		s[i] = s[slen - i - 1];
		s[slen - i - 1] = tmp;
		i++;
	}
	return (s);
}
