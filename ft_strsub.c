/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:25:53 by mcarter           #+#    #+#             */
/*   Updated: 2019/05/28 11:08:13 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*rtn;

	s += start;
	rtn = ft_strnew(len);
	if (rtn == NULL)
		return (NULL);
	ft_strncpy(rtn, s, len);
	rtn[len] = '\0';
	return (rtn);
}
