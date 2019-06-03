/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:48 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:02:49 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strcmp(void)
{
	testfunc_i("ft_strcmp1", ft_strcmp("test", "test"), 0);
	testfunc_i("ft_strcmp2", ft_strcmp("tesu", "test"), 1);
	testfunc_i("ft_strcmp3", ft_strcmp("tess", "test"), -1);
	testfunc_i("ft_strcmp4", ft_strcmp("abcdefghijklmnop", "abcdefghijklmnop"), 0);
	testfunc_i("ft_strcmp5", ft_strcmp("TEST", "test"), -32);
	testfunc_i("ft_strcmp6", ft_strcmp("testtest", "test"), 116);

	testfunc_i("ft_strncmp1", ft_strncmp("test", "test", 50), 0);
	testfunc_i("ft_strncmp2", ft_strncmp("tesu", "test", 3), 0);
	testfunc_i("ft_strncmp3", ft_strncmp("TEST", "test", 2), -32);
	testfunc_i("ft_strncmp4", ft_strncmp("testtest", "test", 4), 0);
	testfunc_i("ft_strncmp5", ft_strncmp("testtest", "test", 500), 116);
}
