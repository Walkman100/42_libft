/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:51 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:39:37 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strcpy(void)
{
	char buf[128];

	buf[0] = '2';
	ft_strcpy(buf, "test");
	testfunc_s("ft_strcpy  ", buf, "test");
	ft_strncpy(buf, "2", 128);
	ft_strncpy(buf, "abcdefghijklmnop", 8);
	testfunc_s("ft_strncpy1", buf, "abcdefgh");
	ft_strncpy(buf, "abcd", 128);
	testfunc_s("ft_strncpy2", buf, "abcd");
}
