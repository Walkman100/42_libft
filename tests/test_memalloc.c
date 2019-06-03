/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:16 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:34:56 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_memalloc(void)
{
	char	*buf;
	int		*buf_i;

	buf = ft_memalloc(5);
	buf[0] = 't';
	buf[1] = 'e';
	buf[2] = 's';
	buf[3] = 't';
	testfunc_s("ft_memalloc1", buf, "test");
	free(buf);
	buf_i = ft_memalloc(sizeof(*buf_i) * 2);
	buf_i[0] = 5874;
	testfunc_i("ft_memalloc2", buf_i[0], 5874);
	buf_i[1] = 924672;
	testfunc_i("ft_memalloc3", buf_i[1], 924672);
}
