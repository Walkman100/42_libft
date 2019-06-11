/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:00:02 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/11 13:04:44 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iswhitespace(int c)
{
	if (c == ' ' || c == '\t' || c == '\v' ||
			c == '\n' || c == '\r' || c == '\f')
		return (1);
	return (0);
}
