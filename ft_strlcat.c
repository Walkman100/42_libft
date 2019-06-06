/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:25:07 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/06 14:28:26 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;

	i = 0;
	dstlen = ft_strlen(dst);
	if (size == 0)
		return (dstlen + ft_strlen(src));
	while ((dstlen + i) < (size - 1) && src[i] != '\0')
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstlen + i <= size)
		dst[dstlen + i] = '\0';
	if (dstlen > size)
		return (size + ft_strlen(src));
	return (dstlen + ft_strlen(src));
}
