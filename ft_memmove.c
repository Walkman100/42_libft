/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:28:59 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/07 15:18:39 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*c_dst;
	unsigned char	*c_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (src > dst)
		return (ft_memcpy(dst, src, n));
	else
	{
		c_dst = (unsigned char *)dst;
		c_src = (unsigned char *)src;
		while (n > 0)
		{
			n--;
			c_dst[n] = c_src[n];
		}
		return (dst);
	}
}
