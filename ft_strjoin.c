/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:24:57 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/06 09:47:12 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

STR	ft_strjoin(const STR s1, const STR s2)
{
	STR	rtn;

	if (!s1 || !s2)
		return (NULL);
	rtn = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (rtn == NULL)
		return (NULL);
	ft_strcpy(rtn, s1);
	ft_strcat(rtn, s2);
	return (rtn);
}
