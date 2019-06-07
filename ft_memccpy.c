/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:18 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/07 14:41:28 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*c_dst;
	unsigned char	*c_src;
	int				cont;

	i = 0;
	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	cont = 1;
	while (cont)
	{
		if (i < n)
		{
			c_dst[i] = c_src[i];
			i++;
			if (i >= 0)
				if (c_src[i - 1] == (unsigned char)c)
					cont = 0;
		}
		else
			cont = 0;
	}
	if (c_src[i - 1] == c)
		return (dst + i);
	return (NULL);
}
