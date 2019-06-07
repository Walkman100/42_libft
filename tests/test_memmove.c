/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:26 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/06 11:41:42 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_memmove(void)
{
	char buf[128];

	ft_strcpy(buf, "abcdefghijklmnopqrstuvwxyz");
	ft_memmove(buf + 10, buf, 20);
	buf[30] = '\0';
	testfunc_s("ft_memmove1", buf, "abcdefghijabcdefghijklmnopqrst");
	ft_strcpy(buf, "abcdefghijklmnopqrstuvwxyz");
	ft_memmove(buf, buf + 10, 16);
	buf[30] = '\0';
	testfunc_s("ft_memmove2", buf, "klmnopqrstuvwxyzqrstuvwxyz");
}
