/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:06 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:03:07 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strequ(void)
{
	testfunc_i("ft_strequ1", ft_strequ("test", "test"), 1);
	testfunc_i("ft_strequ2", ft_strequ("tesu", "test"), 0);
	testfunc_i("ft_strequ3", ft_strequ("testtest", "test"), 0);
	testfunc_i("ft_strequ4", ft_strequ(NULL, NULL), 1);
	testfunc_i("ft_strequ5", ft_strequ("test", NULL), 0);
}
