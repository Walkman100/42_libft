/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:48 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/11 09:41:08 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strcmp(void)
{
	testfunc_i("ft_strcmp1", ft_strcmp("test", "test"), 0);
	testfunc_i("ft_strcmp2", ft_strcmp("tesu", "test"), 1);
	testfunc_i("ft_strcmp3", ft_strcmp("tess", "test"), -1);
	testfunc_i("ft_strcmp4", ft_strcmp("abcdefghijklmn", "abcdefghijklmn"), 0);
	testfunc_i("ft_strcmp5", ft_strcmp("TEST", "test"), -1);
	testfunc_i("ft_strcmp6", ft_strcmp("testtest", "test"), 1);
	testfunc_i("ft_strncmp1", ft_strncmp("test", "test", 50), 0);
	testfunc_i("ft_strncmp2", ft_strncmp("tesu", "test", 3), 0);
	testfunc_i("ft_strncmp3", ft_strncmp("TEST", "test", 2), -1);
	testfunc_i("ft_strncmp4", ft_strncmp("testtest", "test", 4), 0);
	testfunc_i("ft_strncmp5", ft_strncmp("testtest", "test", 500), 1);
	testfunc_i("ft_strncmp6", ft_strncmp("zyxbcdefgh", "abcdwxyz", 0), 0);
	testfunc_i("ft_strncmp6", ft_strncmp("abcdefgh", "", 0), 0);
}
