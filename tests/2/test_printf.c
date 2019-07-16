/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:40:10 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/15 16:19:46 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	test_printf(void)
{
	ft_printf("%c %s %p %i %u%p\n", 'I', "test", MAGENTA, -37L, 50, RESET);
	ft_putstr("Previous line should be: I test " MAGENTA " -37 50" RESET "\n");
	ft_printf("%i %i %u\n", (long long)(-9223372036854775807 - 1), 9223372036854775807LL, 18446744073709551615ULL);
	ft_putstr("Previous line should be: -9223372036854775808 9223372036854775807 18446744073709551615\n");
}
