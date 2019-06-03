/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:57 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:29:21 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strdel(void)
{
	char *buf;

	buf = ft_strdup("cihcohicohohch,'c'pg8298gph98gp908h");
	ft_strdel(&buf);
	testfunc_s("ft_strdel", buf, NULL);
}
