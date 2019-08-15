/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:43:56 by mcarter           #+#    #+#             */
/*   Updated: 2019/08/15 10:16:04 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	striter_delegate(char *c)
{
	if (*c > '6')
		*c = '1';
}

void		test_striter(void)
{
	char buf[5];

	ft_strcpy(buf, "5678");
	ft_striter(buf, &striter_delegate);
	testfunc_s("ft_striter", buf, "5611");
}
