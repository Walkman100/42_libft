/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:38 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:03:39 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strtrim(void)
{
	testfunc_s("ft_strtrim1", ft_strtrim(" \n \t test \n \t "), "test");
	testfunc_s("ft_strtrim2", ft_strtrim(" \ttest"), "test");
	testfunc_s("ft_strtrim3", ft_strtrim("test \t"), "test");
	testfunc_s("ft_strtrim4", ft_strtrim("test"), "test");
}
