/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:00:45 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:51:55 by mcarter          ###   ########.fr       */
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
	testfunc_i("ft_atoi6", ft_atoi("oggco2147dud3727pd2dd37d"), 2147);
}
