/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnequ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:20 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:03:21 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strnequ(void)
{
	testfunc_i("ft_strnequ1", ft_strnequ("test", "test", 50), 1);
	testfunc_i("ft_strnequ2", ft_strnequ("tesu", "test", 3), 1);
	testfunc_i("ft_strnequ3", ft_strnequ("TEST", "test", 2), 0);
	testfunc_i("ft_strnequ4", ft_strnequ("testtest", "test", 4), 1);
	testfunc_i("ft_strnequ5", ft_strnequ("testtest", "test", 500), 0);
}
