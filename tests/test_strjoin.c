/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:09 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 10:03:10 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_strjoin(void)
{
	testfunc_s("ft_strjoin1", ft_strjoin("abcd", "efgh"), "abcdefgh");
	testfunc_s("ft_strjoin2", ft_strjoin("g843y7bf", "o89ym9"), "g843y7bfo89ym9");
}
