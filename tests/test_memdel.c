/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:23 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:35:19 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_memdel(void)
{
	char *buf;

	buf = ft_strdup("ipoecrhercibhepcrdh.epdhmc.hiydmcgph");
	ft_memdel((void**)&buf);
	testfunc_s("ft_memdel", buf, NULL);
}
