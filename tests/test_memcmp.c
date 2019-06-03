/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:00:40 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 15:06:16 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_memcmp(void)
{
	testfunc_i("ft_memcmp1", ft_memcmp("test", "test", 5), 0);
	testfunc_i("ft_memcmp2", ft_memcmp("tesu", "test", 3), 0);
	testfunc_i("ft_memcmp3", ft_memcmp("TEST", "test", 2), -32);
	testfunc_i("ft_memcmp4", ft_memcmp("testtest", "test", 4), 0);
	testfunc_i("ft_memcmp5", ft_memcmp("testtest", "test", 9), 116);
	testfunc_i("ft_memcmp6", ft_memcmp("test", "test", 0), 0);
}
