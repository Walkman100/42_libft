/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:18 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 14:25:35 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*c_dst;
	char	*c_src;

	i = 0;
	c_dst = (char *)dst;
	c_src = (char *)src;
	while (i < n && c_src[i - 1] != c)
	{
		c_dst[i] = c_src[i];
		i++;
	}
	if (c_src[i - 1] == c)
		return (dst + i);
	return (NULL);
}
