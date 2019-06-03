/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:08 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:02:09 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_is(void)
{
	testfunc_i("ft_isalpha1", ft_isalpha('P'), 1);
	testfunc_i("ft_isalpha2", ft_isalpha('>'), 0);
	testfunc_i("ft_isdigit1", ft_isdigit('5'), 1);
	testfunc_i("ft_isdigit2", ft_isdigit('='), 0);
	testfunc_i("ft_isalnum1", ft_isalnum('8'), 1);
	testfunc_i("ft_isalnum2", ft_isalnum('I'), 1);
	testfunc_i("ft_isalnum3", ft_isalnum('|'), 0);
	testfunc_i("ft_isascii1", ft_isascii('X'), 1);
	testfunc_i("ft_isascii2", ft_isascii('6'), 1);
	testfunc_i("ft_isascii3", ft_isascii(']'), 1);
	testfunc_i("ft_isascii4", ft_isascii(128), 0);
	testfunc_i("ft_isprint1", ft_isprint('X'), 1);
	testfunc_i("ft_isprint2", ft_isprint('6'), 1);
	testfunc_i("ft_isprint3", ft_isprint(8), 0);
	testfunc_i("ft_isprint4", ft_isprint(127), 0);
}
