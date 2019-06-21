/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:13 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 15:19:42 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned STR	c_s1;
	unsigned STR	c_s2;

	if (n == 0)
		return (0);
	i = 0;
	c_s1 = (unsigned STR)s1;
	c_s2 = (unsigned STR)s2;
	while (1)
	{
		if (c_s1[i] - c_s2[i] != 0 || i >= (n - 1))
			return (c_s1[i] - c_s2[i]);
		i++;
	}
}
