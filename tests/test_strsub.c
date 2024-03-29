/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:34 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:49:03 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strsub(void)
{
	testfunc_s("ft_strsub1", ft_strsub("1234567890", 4, 4), "5678");
	testfunc_s("ft_strsub2", ft_strsub("',.pyl/=aeuids-\\`;qz", 10, 3), "uid");
	testfunc_s("ft_strsub3", ft_strsub("abcdefghijk", 6, 10), "ghijk");
}
