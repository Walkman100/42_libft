/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:25:25 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/11 09:46:36 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const STR s1, const STR s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	if (n == 0)
		return (0);
	while (1)
	{
		if (s1[i] - s2[i] != 0 || s1[i] == '\0' || i >= (n - 1))
		{
			diff = ((unsigned STR)s1)[i] - ((unsigned STR)s2)[i];
			if (diff < 0)
				return (-1);
			else if (diff > 0)
				return (1);
			return (diff);
		}
		i++;
	}
}
