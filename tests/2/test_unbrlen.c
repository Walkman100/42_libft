/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_unbrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:52:40 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/18 16:55:19 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	test_unbrlen(void)
{
	testfunc_i("ft_unbrlen1", ft_unbrlen(123456), 6);
	testfunc_i("ft_unbrlen2", ft_unbrlen(1234567890), 10);
	testfunc_i("ft_unbrlen3", ft_unbrlen(18446744073709551614ULL), 20);
	testfunc_i("ft_unbrlen4", ft_unbrlen((MAXUNBR)(18446744073709551615ULL) * 1000), 23);
}
