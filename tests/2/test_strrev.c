/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 09:51:56 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/14 10:32:14 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	test_strrev(void)
{
	testfunc_s("ft_strrev1", ft_strrev(ft_strdup("1234")), "4321");
	testfunc_s("ft_strrev2", ft_strrev(ft_strdup("\t\v\n\r\e")), "\e\r\n\v\t");
	testfunc_s("ft_strrev3", ft_strrev(ft_strdup("")), "");
}
