/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:39 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:33:03 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strcat(void)
{
	char buf[128];

	ft_strcpy(buf, "abcd");
	testfunc_s("ft_strcat  ", ft_strcat(buf, "efgh"), "abcdefgh");
	ft_strncpy(buf, "t", 128);
	testfunc_s("ft_strncat1", ft_strncat(buf, "esttesttest", 3), "test");
	testfunc_s("ft_strncat2", ft_strncat(buf, "test", 8), "testtest");
}
