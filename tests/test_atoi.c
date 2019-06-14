/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:00:45 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/14 14:37:10 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_atoi(void)
{
	testfunc_i("ft_atoi1", ft_atoi("1486798"), 1486798);
	testfunc_i("ft_atoi2", ft_atoi("-25678"), -25678);
	testfunc_i("ft_atoi3", ft_atoi("2147483647"), 2147483647);
	testfunc_i("ft_atoi4", ft_atoi("-2147483648"), -2147483648);
	testfunc_i("ft_atoi5", ft_atoi(" \f\n\r\t\v58000350retrarcaht"), 58000350);
	testfunc_i("ft_atoi6", ft_atoi("oggco2147dud3727pd2dd37d"), 0);
	testfunc_i("ft_atoi7", ft_atoi("45879643875638356897268367897"), 726008345);
	testfunc_i("ft_atoi8", ft_atoi("-48595648967483768094768478634226763"), 0);
	testfunc_i("ft_atoi9", ft_atoi("\e06050"), 0);
	testfunc_i("ft_atoi10", ft_atoi("+1798"), 1798);
	testfunc_i("ft_atoi11", ft_atoi("+-1798"), 0);
	testfunc_i("ft_atoi12", ft_atoi(""), 0);
}
