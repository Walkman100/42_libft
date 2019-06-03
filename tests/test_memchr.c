/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:59:34 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 16:16:49 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_memchr(void)
{
	testfunc_s("ft_memchr1", ft_memchr("12345", '3', 3), "345");
	testfunc_s("ft_memchr2", ft_memchr("12345", '5', 6), "5");
	testfunc_s("ft_memchr3", ft_memchr("12345", '\0', 6), "");
	testfunc_s("ft_memchr4", ft_memchr("12345", '4', 3), NULL);
	testfunc_s("ft_memchr5", ft_memchr("12345", '8', 6), NULL);
}
