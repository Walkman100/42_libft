/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:28:59 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 13:29:54 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void	*tmp;

	tmp = ft_memalloc(n);
	if (!tmp)
		return (NULL);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dst, tmp, n);
	free(tmp);
	return (dst);
}
