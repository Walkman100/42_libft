/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:28 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/07 17:34:21 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strsplit(void)
{
	char **arr;

	arr = ft_strsplit("*hello*fellow***students*", '*');
	testfunc_s("ft_strsplit1.1", arr[0], "hello");
	testfunc_s("ft_strsplit1.2", arr[1], "fellow");
	testfunc_s("ft_strsplit1.3", arr[2], "students");
	testfunc_s("ft_strsplit1.4", arr[3], NULL);
	arr = ft_strsplit("ohhtochcorhteohtcrehoctcecohec", 't');
	testfunc_s("ft_strsplit2.1", arr[0], "ohh");
	testfunc_s("ft_strsplit2.2", arr[1], "ochcorh");
	testfunc_s("ft_strsplit2.3", arr[2], "eoh");
	testfunc_s("ft_strsplit2.4", arr[3], "crehoc");
	testfunc_s("ft_strsplit2.5", arr[4], "cecohec");
	testfunc_s("ft_strsplit2.6", arr[5], NULL);
	arr = ft_strsplit("            ", ' ');
	testfunc_s("ft_strsplit3", arr[0], NULL);
}
