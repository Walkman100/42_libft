/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:13 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/06 14:38:39 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strlcat(void)
{
	char buf[128];

	buf[0] = 't';
	buf[1] = '\0';
	testfunc_i("ft_strlcat1.1", ft_strlcat(buf, "esttesttest", 5), 12);
	testfunc_s("ft_strlcat1.2", buf, "test");
	testfunc_i("ft_strlcat2.1", ft_strlcat(buf, "test", 9), 8);
	testfunc_s("ft_strlcat2.2", buf, "testtest");
	testfunc_i("ft_strlcat3.1", ft_strlcat(buf, "abcd", 9), 12);
	testfunc_s("ft_strlcat3.2", buf, "testtest");
	testfunc_i("ft_strlcat4.1", ft_strlcat(buf, "abcd", 10), 12);
	testfunc_s("ft_strlcat4.2", buf, "testtesta");
	testfunc_i("ft_strlcat5.1", ft_strlcat(buf, "defg", 9), 13);
	testfunc_s("ft_strlcat5.2", buf, "testtesta");
	ft_strncpy(buf, "1234", 128);
	testfunc_i("ft_strlcat6.1", ft_strlcat(buf, "5678901234", 7), 14);
	testfunc_s("ft_strlcat6.2", buf, "123456");
	ft_memset(buf, 'B', 32);
	testfunc_i("ft_strlcat7.1", ft_strlcat(buf, "aaa", 8), 11);
	buf[64] = '\0';
	testfunc_s("ft_strlcat7.2", buf, "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB");
}
