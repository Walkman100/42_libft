/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:19 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:42:29 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_memcpy(void)
{
	char	buf[128];
	short	buf_s;
	int		buf_i;
	char	buf2[16];

	ft_strncpy(buf, "test", 128);
	ft_memcpy(buf, "abcdefghijklmnop", 8);
	testfunc_s("ft_memcpy1", buf, "abcdefgh");
	ft_memcpy(buf, "abcd", 128);
	testfunc_s("ft_memcpy2", buf, "abcd");
	buf_s = 0;
	buf_i = 217;
	ft_memcpy(&buf_s, &buf_i, sizeof(buf_s));
	testfunc_i("ft_memcpy3", buf_s, 217);
	buf2[0] = '\0';
	buf2[1] = ' ';
	ft_memcpy(&buf_s, buf2, sizeof(buf_s));
	testfunc_i("ft_memcpy4", buf_s, 8192);
}
