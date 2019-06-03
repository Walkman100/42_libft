/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:42 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:03:43 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_tolower(void)
{
	testfunc_i("ft_tolower1", ft_tolower('G'), 'g');
	testfunc_i("ft_tolower2", ft_tolower('A'), 'a');
	testfunc_i("ft_tolower3", ft_tolower('7'), '7');
}
