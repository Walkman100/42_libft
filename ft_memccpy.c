/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:18 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/28 13:39:18 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*c_dst;
	unsigned char	*c_src;
	unsigned char	c_c;

	i = 0;
	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	c_c = (unsigned char)c;
	while (i < n)
	{
		c_dst[i] = c_src[i];
		i++;
		if (i == 0 && c_src[i] == c_c)
			return (dst);
		else if (c_src[i - 1] == c_c)
			return (dst + i);
	}
	return (NULL);
}
