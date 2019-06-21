/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:15 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/06 11:56:06 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned STR	c_s;

	i = 0;
	c_s = (unsigned STR)s;
	while (i < n)
	{
		if (*c_s == (unsigned char)c)
			return ((void *)c_s);
		c_s++;
		i++;
	}
	return (NULL);
}
