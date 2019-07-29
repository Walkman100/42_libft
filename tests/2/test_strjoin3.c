/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 12:50:20 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/29 12:52:23 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	test_strjoin3(void)
{
	testfunc_s("ft_strjoin31", ft_strjoin3("abc", "def", "ghi"), "abcdefghi");
	testfunc_s("ft_strjoin32", ft_strjoin3("/path", "/", "name"), "/path/name");
}
