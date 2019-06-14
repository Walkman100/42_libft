/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_debug.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:04:37 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/14 11:46:38 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	test_debug(void)
{
	ft_putstr(BWHITE "debug1" RESET ": shouldn't have output:");
	unsetenv("DEBUG");
	DEBUG("shouldn't see this!");
	ft_putstr("\n" BWHITE "debug2" RESET ": should show output: ");
	setenv("DEBUG", "1", 1);
	DEBUG("this should be visible\n");
}
