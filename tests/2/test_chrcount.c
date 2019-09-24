/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_chrcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 13:54:50 by mcarter           #+#    #+#             */
/*   Updated: 2019/09/24 13:58:45 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	test_chrcount(void)
{
	testfunc_i("ft_chrcount1", ft_chrcount("hi,1,gcodcg, face, t,r,o", ','), 6);
	testfunc_i("ft_chrcount2", ft_chrcount("2375615765856659046718", '6'), 5);
}
