/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_put.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:35 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:02:37 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_put(void)
{
	ft_putchar_fd('o', 1);
	ft_putchar_fd('e', 2);
	ft_putchar('o');
	ft_putstr_fd(" " BYELLOW "stdout" RESET, 1);
	ft_putstr_fd(" " BRED "stderr" RESET, 2);
	ft_putstr(" " BYELLOW "stdout" RESET "\n");
	ft_putendl_fd(BYELLOW "stdout" RESET, 1);
	ft_putendl_fd(BRED "stderr" RESET, 2);
	ft_putendl(BYELLOW "stdout" RESET);
	ft_putnbr_fd(1, 1);
	ft_putchar(' ');
	ft_putnbr_fd(2, 2);
	ft_putchar('\n');
	ft_putnbr(-76365);
	ft_putendl("  (-76365)");
	ft_putnbr(-2147483648);
	ft_putchar(' ');
	ft_putnbr(2147483647);
	ft_putendl("  (-2147483648, 2147483647)");
}
