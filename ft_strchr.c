/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:28:27 by mcarter           #+#    #+#             */
/*   Updated: 2019/05/30 11:16:30 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

STR	ft_strchr(const STR s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((STR)s);
		s++;
	}
	if (*s == c)
		return ((STR)s);
	return (NULL);
}
