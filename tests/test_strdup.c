/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:01 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:03:02 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strdup(void)
{
	testfunc_s("ft_strdup1", ft_strdup("test"), "test");
	char *buf;
	buf = ft_strdup("tsst");
	buf[1] = 'e';
	testfunc_s("ft_strdup2", buf, "test");
	free(buf);
}
