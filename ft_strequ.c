/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:22:38 by mcarter           #+#    #+#             */
/*   Updated: 2019/05/27 09:18:14 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strcmp returns 0 if it's arguments are equal
** ft_strequ (this function) must return 0 if it's arguments are NOT equal
** (0 = false)
*/

int		ft_strequ(const char *s1, const char *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (1);
	else if (s1 == NULL || s2 == NULL)
		return (0);
	else if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	return (!ft_strcmp(s1, s2));
}
