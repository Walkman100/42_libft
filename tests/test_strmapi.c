/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 17:59:57 by mcarter           #+#    #+#             */
/*   Updated: 2019/08/15 11:35:43 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static char	strmapi_delegate(unsigned int i, char c)
{
	c = i + '0';
	return (c);
}

void		test_strmapi(void)
{
	char buf[5];

	ft_strcpy(buf, "5678");
	testfunc_s("ft_strmapi", ft_strmapi(buf, &strmapi_delegate), "0123");
}
