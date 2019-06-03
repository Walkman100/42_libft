/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:19 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:02:20 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_memcpy(void)
{
	char buf[128] = "test";
	ft_memcpy(buf, "abcdefghijklmnop", 8);
	testfunc_s("ft_memcpy1", buf, "abcdefgh");
	ft_memcpy(buf, "abcd", 128);
	testfunc_s("ft_memcpy2", buf, "abcd");
	short buf_s = 0;
	int buf_i = 217;
	ft_memcpy(&buf_s, &buf_i, sizeof(buf_s));
	testfunc_i("ft_memcpy3", buf_s, 217);
	char buf2[16] = "\0 ";
	ft_memcpy(&buf_s, buf2, sizeof(buf_s));
	testfunc_i("ft_memcpy4", buf_s, 8192);
}
