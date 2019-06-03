/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:15 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 16:09:41 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*c_s;

	i = 0;
	c_s = (unsigned char *)s;
	while (i < n)
	{
		if (*c_s == c)
			return ((void *)c_s);
		c_s++;
		i++;
	}
	return (NULL);
}
