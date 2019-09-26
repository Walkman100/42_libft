/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:42:43 by mcarter           #+#    #+#             */
/*   Updated: 2019/09/26 18:39:02 by mcarter          ###   ########.fr       */
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
		test_get_next_line();
		test_putunbr();
		test_printf();
		test_puthex();
		test_unbrlen();
		test_strjoin3();
		test_chrcount();
		test_realloc();
		test_parrlen();
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
		else if (strequ(argv[1], "gnl") || strequ(argv[1], "get_next_line"))
			test_get_next_line();
		else if (strequ(argv[1], "putunbr"))
			test_putunbr();
		else if (strequ(argv[1], "printf"))
			test_printf();
		else if (strequ(argv[1], "puthex"))
			test_puthex();
		else if (strequ(argv[1], "unbrlen"))
			test_unbrlen();
		else if (strequ(argv[1], "strjoin3"))
			test_strjoin3();
		else if (strequ(argv[1], "chrcount"))
			test_chrcount();
		else if (strequ(argv[1], "realloc"))
			test_realloc();
		else if (strequ(argv[1], "parrlen"))
			test_parrlen();
		else
		{
			if (isatty(2))
				ft_putstr_fd(BRED "Test " BCYAN, 2);
			else
				ft_putstr_fd("Test ", 2);
			ft_putstr_fd(argv[1], 2);
			if (isatty(2))
				ft_putendl_fd(BRED " not found!" RESET, 2);
			else
				ft_putendl_fd(" not found!", 2);
		}
	}
	return (0);
}
