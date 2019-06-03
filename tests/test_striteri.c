/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 17:30:54 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 17:32:11 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	striteri_delegate(unsigned int i, char *c)
{
	*c = i + '0';
}

void		test_striteri(void)
{
	char buf[4];

	ft_strcpy(buf, "5678");
	ft_striteri(buf, &striteri_delegate);
	testfunc_s("ft_striteri", buf, "0123");
}
