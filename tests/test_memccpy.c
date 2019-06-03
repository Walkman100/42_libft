/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:07:44 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 15:25:36 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_memccpy(void)
{
	char	buf[128];

	ft_strncpy(buf, "test", 128);
	*(char *)ft_memccpy(buf, "abcdefghijklmnop", 'j', 15) = '\0';
	testfunc_s("ft_memccpy1", buf, "abcdefghij");
	testfunc_s("ft_memccpy2.1", ft_memccpy(buf, "abcdefghijk", 'r', 10), NULL);
	testfunc_s("ft_memccpy2.2", buf, "abcdefghij");
}
