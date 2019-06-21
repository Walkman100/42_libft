/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:12:29 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/14 11:40:31 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	debug_2(char *str, const char *caller_name)
{
	if (getenv("DEBUG"))
	{
		ft_putstr(BCYAN "[DEBUG:");
		ft_putstr(caller_name);
		ft_putstr("]" RESET " " BRED);
		ft_putstr(str);
		ft_putstr(RESET);
	}
}
