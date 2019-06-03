/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:31 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:31:36 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_memset(void)
{
	char	buf[128];
	int		buf_i;
	short	buf_s;

	ft_strcpy(buf, "testtest");
	ft_memset(buf, 's', 4 * sizeof(*buf));
	testfunc_s("ft_memset1", buf, "sssstest");
	buf_i = 4;
	ft_memset(&buf_i, 0, sizeof(buf_i));
	testfunc_i("ft_memset2", buf_i, 0);
	ft_memset(&buf_i, -1, sizeof(buf_i));
	testfunc_i("ft_memset3", buf_i, -1);
	ft_memset(&buf_i, 1, sizeof(buf_i));
	testfunc_i("ft_memset4", buf_i, 16843009);
	buf_s = 23;
	ft_memset(&buf_s, 1, sizeof(buf_s));
	testfunc_i("ft_memset5", buf_s, 257);
}
