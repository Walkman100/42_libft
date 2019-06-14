/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 09:49:02 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/14 09:51:53 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	test_atol(void)
{
	testfunc_i("ft_atol1", ft_atol("1486798"), 1486798);
	testfunc_i("ft_atol2", ft_atoi("-25678"), -25678);
	testfunc_i("ft_atol3", ft_atoi("2147483647"), 2147483647);
	testfunc_i("ft_atol4", ft_atoi("-2147483648"), -2147483648);
	testfunc_i("ft_atol5", ft_atoi(" \f\n\r\t\v58000350retrarcaht"), 58000350);
	testfunc_i("ft_atol6", ft_atoi("oggco2147dud3727pd2dd37d"), 0);
	testfunc_i("ft_atol7", ft_atoi("45879643875638356897268367897"), 726008345);
	testfunc_i("ft_atol8", ft_atoi("-48595648967483768094768478634226763"), 0);
	testfunc_i("ft_atol9", ft_atoi("\e06050"), 0);
	testfunc_i("ft_atol10", ft_atoi("+1798"), 1798);
	testfunc_i("ft_atol11", ft_atoi("+-1798"), 0);
}
