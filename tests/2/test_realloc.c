/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_realloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 17:40:35 by mcarter           #+#    #+#             */
/*   Updated: 2019/09/26 18:06:17 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	test_realloc(void)
{
	char	*ptr;
	char	*ptr2;
	int		*iptr;

	ptr = ft_strdup("temp");
	ptr2 = ptr;
	ptr = ft_realloc(ptr, 10);
	ft_strcpy(ptr, "abcdefghi");
	testfunc_s("realloc1", ptr2, "temp");
	testfunc_s("realloc2", ptr, "abcdefghi");
	iptr = ft_memalloc(sizeof(*iptr) * 3);
	iptr[0] = 1048575;
	iptr[1] = 16777215;
	iptr = ft_realloc(iptr, sizeof(*iptr) * 2);
	iptr = ft_realloc(iptr, sizeof(*iptr) * 3);
	testfunc_i("realloc3", iptr[0], 1048575);
	testfunc_i("realloc4", iptr[1], 16777215);
}
