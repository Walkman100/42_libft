/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:22:38 by mcarter           #+#    #+#             */
/*   Updated: 2019/08/19 14:58:50 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strcmp returns 0 if it's arguments are equal
** ft_strequ (this function) must return 0 if it's arguments are NOT equal
** (0 = false)
*/

int		ft_strequ(const STR s1, const STR s2)
{
	if (s1 == NULL && s2 == NULL)
		return (1);
	else if (s1 == NULL || s2 == NULL)
		return (0);
	return (!ft_strcmp(s1, s2));
}
