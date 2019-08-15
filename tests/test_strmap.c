/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 17:44:59 by mcarter           #+#    #+#             */
/*   Updated: 2019/08/15 11:35:17 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static char	strmap_delegate(char c)
{
	if (c > '6')
		c = '1';
	return (c);
}

void		test_strmap(void)
{
	char buf[5];

	ft_strcpy(buf, "5678");
	testfunc_s("ft_strmap", ft_strmap(buf, &strmap_delegate), "5611");
}
