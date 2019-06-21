/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:42:43 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/14 10:15:40 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	main(int argc, STR *argv)
{
	if (argc == 1 || (argc == 2 && strequ(argv[1], "all")))
	{
		test_atol();
		test_strrev();
		test_strclen();
		test_get_tw();
		test_get_th();
		test_debug();
		return (0);
	}
	if (argc > 1)
	{
		if (ft_strnequ(argv[1], "ft_", 3))
			argv[1] += 3;
		if (strequ(argv[1], "atol"))
			test_atol();
		else if (strequ(argv[1], "strrev"))
			test_strrev();
		else if (strequ(argv[1], "strclen"))
			test_strclen();
		else if (strequ(argv[1], "get_tw") || strequ(argv[1], "gettw"))
			test_get_tw();
		else if (strequ(argv[1], "get_th") || strequ(argv[1], "getth"))
			test_get_th();
		else if (strequ(argv[1], "debug"))
			test_debug();
		else
		{
			ft_putstr_fd(BRED "Test " BCYAN, 2);
			ft_putstr_fd(argv[1], 2);
			ft_putendl_fd(BRED " not found!" RESET, 2);
		}
	}
	return (0);
}
