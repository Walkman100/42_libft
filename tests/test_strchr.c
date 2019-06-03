/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:02:41 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:50:45 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strchr(void)
{
	testfunc_s("ft_strchr1", ft_strchr("345678901234557", '7'), "78901234557");
	testfunc_s("ft_strchr2", ft_strchr("abcdefghi", 'i'), "i");
	testfunc_s("ft_strchr2", ft_strchr("abcd", '\0'), "");
	testfunc_s("ft_strrchr1", ft_strrchr("12345678901234557890", '7'), "7890");
	testfunc_s("ft_strrchr2", ft_strrchr("abcdefghi", 'b'), "bcdefghi");
	testfunc_s("ft_strrchr3", ft_strrchr("abcd", '\0'), "");
}
