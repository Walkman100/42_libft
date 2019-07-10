/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_get_next_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:03:35 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/10 15:20:01 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <fcntl.h>

void	test_get_next_line(void)
{
	int	fd;
	STR line;

	fd = open("tests/2/main.c", O_RDONLY);
	testfunc_i("get_next_line1", get_next_line(fd, &line), 1);
	testfunc_s("get_next_line2", line, "/* ************************************************************************** */");
}
