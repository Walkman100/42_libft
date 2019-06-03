/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:13 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:03:14 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strlcat(void)
{
	char buf[128] = "t";
	testfunc_i("ft_strlcat1.1", ft_strlcat(buf, "esttesttest", 5), 12);
	testfunc_s("ft_strlcat1.2", buf, "test");
	testfunc_i("ft_strlcat2.1", ft_strlcat(buf, "test", 9), 8);
	testfunc_s("ft_strlcat2.2", buf, "testtest");
	testfunc_i("ft_strlcat3.1", ft_strlcat(buf, "abcd", 9), 12);
	testfunc_s("ft_strlcat3.2", buf, "testtest");
	testfunc_i("ft_strlcat4.1", ft_strlcat(buf, "abcd", 10), 12);
	testfunc_s("ft_strlcat4.2", buf, "testtesta");
	testfunc_i("ft_strlcat5.1", ft_strlcat(buf, "defg", 9), 9);
	testfunc_s("ft_strlcat5.1", buf, "testtesta");
}
