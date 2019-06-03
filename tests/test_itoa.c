/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:12 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:02:13 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_itoa(void)
{
	testfunc_s("ft_itoa1", ft_itoa(1486798), "1486798");
	testfunc_s("ft_itoa2", ft_itoa(-25678), "-25678");
	testfunc_s("ft_itoa3", ft_itoa(2147483647), "2147483647");
	testfunc_s("ft_itoa4", ft_itoa(-2147483648), "-2147483648");
	testfunc_s("ft_itoa5", ft_itoa(4), "4");
	testfunc_s("ft_itoa6", ft_itoa(-3), "-3");
	testfunc_s("ft_itoa7", ft_itoa(0), "0");
}
