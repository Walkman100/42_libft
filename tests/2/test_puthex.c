/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_puthex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 09:07:42 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/18 10:02:30 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	test_puthex(void)
{
	ft_puthex(255);
	ft_putchar(' ');
	ft_puthex(5156454);
	ft_putchar('\n');
	ft_putstr("Previous line should be: ff 4eae66\n");
	ft_puthex(18446744073709551614ULL);
	ft_putchar(' ');
	ft_puthex((MAXUNBR)(18446744073709551615ULL) * 1000);
	ft_putchar('\n');
	ft_putstr("Previous line should be: fffffffffffffffe 3e7fffffffffffffc18\n");
}
