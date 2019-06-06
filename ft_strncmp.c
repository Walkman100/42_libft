/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:25:25 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/06 15:13:11 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (1)
	{
		if (s1[i] - s2[i] != 0 || s1[i] == '\0' || i >= (n - 1))
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
	}
}
