/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 17:27:40 by mcarter           #+#    #+#             */
/*   Updated: 2019/09/26 17:55:13 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*rtn;

	rtn = ft_memalloc(size);
	if (rtn == NULL)
		return (NULL);
	if (ptr)
		ft_memcpy(rtn, ptr, size);
	ft_memdel(&ptr);
	return (rtn);
}
