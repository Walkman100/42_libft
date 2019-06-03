/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:31 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:46:45 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strstr(void)
{
	testfunc_s("ft_strstr1", ft_strstr("1234567890123345", "1233"), "123345");
	testfunc_s("ft_strstr2", ft_strstr("678904557890", "7890"), "78904557890");
	testfunc_s("ft_strstr3", ft_strstr("12345678901234557890", "12344"), NULL);
	testfunc_s("ft_strnstr1", ft_strnstr("678901234557890", "123455", 5), NULL);
	testfunc_s("ft_strnstr2", ft_strnstr("123456", "2345", 5), "23456");
	testfunc_s("ft_strnstr3", ft_strnstr("123456", "2345", 4), NULL);
	testfunc_s("ft_strnstr4", ft_strnstr("123456", "", 32), "123456");
}
