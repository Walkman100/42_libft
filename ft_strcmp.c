/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:24:24 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/11 09:44:29 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const STR s1, const STR s2)
{
	int i;
	int diff;

	i = 0;
	while (1)
	{
		if (s1[i] - s2[i] != 0 || s1[i] == '\0')
		{
			diff = ((unsigned STR)s1)[i] - ((unsigned STR)s2)[i];
			if (diff < 0)
				return (-1);
			else if (diff > 0)
				return (1);
			else
				return (diff);
		}
		i++;
	}
}
