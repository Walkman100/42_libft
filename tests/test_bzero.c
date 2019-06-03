/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:01:57 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:36:19 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_bzero(void)
{
	char	buf[128];
	int		buf_i;

	ft_strcpy(buf, "abcdef");
	buf_i = 4;
	ft_bzero(buf, 4);
	testfunc_s("ft_bzero1", buf, "");
	buf_i = 896876;
	ft_bzero(&buf_i, sizeof(buf_i));
	testfunc_i("ft_bzero2", buf_i, 0);
}
