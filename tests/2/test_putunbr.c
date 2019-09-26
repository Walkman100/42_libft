/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 09:57:34 by mcarter           #+#    #+#             */
/*   Updated: 2019/09/26 17:23:23 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	test_putunbr(void)
{
	ft_putunbr(18446744073709551614ULL);
	ft_putchar(' ');
	ft_putunbr((MAXUNBR)(18446744073709551615ULL) * 1000);
	ft_putchar('\n');
	ft_putstr(BCYAN "Previous line should be:" RESET " 18446744073709551614 18446744073709551615000\n");
}
