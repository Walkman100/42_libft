/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:26 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 13:40:55 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_memmove(void)
{
	char buf[128];

	ft_strcpy(buf, "abcdefghijklmnopqrstuvwxyz");
	ft_memmove(buf + 10, buf, 20);
	buf[30] = '\0';
	testfunc_s("ft_memmove", buf, "abcdefghijabcdefghijklmnopqrst");
}
