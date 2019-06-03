/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:45 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:03:46 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_toupper(void)
{
	testfunc_i("ft_toupper1", ft_toupper('c'), 'C');
	testfunc_i("ft_toupper2", ft_toupper('z'), 'Z');
	testfunc_i("ft_toupper3", ft_toupper('5'), '5');
}
