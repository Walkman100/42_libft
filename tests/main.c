/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:42:43 by mcarter           #+#    #+#             */
/*   Updated: 2019/05/30 14:27:42 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void) //int argc, char** argv)
{
	test_put();
	test_strlen();
	test_is();
	test_toupper();
	test_tolower();
	test_strcpy();
	test_strcat();
	test_strlcat();
	test_strcmp();
	test_strstr();
	test_strchr();
	test_memset();
	test_bzero();
	test_strclr();
	test_memalloc();
	test_strnew();
	test_strdup();
	test_strequ();
	test_strnequ();
	test_itoa();
	test_atoi();
	test_strsub();
	test_strjoin();
	test_strtrim();
	test_strsplit();
	test_memdel();
	test_strdel();
	test_memcpy();
	test_memmove();
	return (0);
}
