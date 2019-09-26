/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_parrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 18:39:14 by mcarter           #+#    #+#             */
/*   Updated: 2019/09/26 18:48:40 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	test_parrlen(void)
{
	char	**arr;
	int		**iarr;
	long	*larr;

	arr = ft_memalloc(sizeof(*arr) * 4);
	arr[0] = "test";
	arr[1] = "abcd";
	arr[2] = "efgh";
	testfunc_i("parrlen1", ft_parrlen((void **)arr), 3);
	iarr = ft_memalloc(sizeof(*iarr) * 3);
	iarr[0] = ft_memalloc(sizeof(**iarr) * 2);
	iarr[0][0] = 5;
	iarr[0][1] = 2525;
	iarr[1] = ft_memalloc(sizeof(**iarr) * 1);
	iarr[1][0] = 2785298;
	testfunc_i("parrlen2", ft_parrlen((void **)iarr), 2);
	larr = ft_memalloc(sizeof(*larr) * 3);
	larr[0] = 897;
	larr[1] = 2870987;
	testfunc_i("parrlen3", ft_parrlen((void **)larr), 2);
}
