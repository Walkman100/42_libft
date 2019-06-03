/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:18 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:03:18 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strlen(void)
{
	testfunc_i("ft_strlen1", ft_strlen("123456"), 6);
	testfunc_i("ft_strlen2", ft_strlen("this is a long string"), 21);
}
