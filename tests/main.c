/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:42:43 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/03 17:49:23 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(int argc, char **argv)
{
	if (argc == 1 || (argc == 2 && strequ(argv[1], "all")))
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
		test_memccpy();
		test_memcmp();
		test_memchr();
		test_striter();
		test_striteri();
		test_strmap();
		return (0);
	}
	if (argc > 1)
	{
		if (ft_strnequ(argv[1], "ft_", 3))
			argv[1] += 3;
		if (strequ(argv[1], "put"))
			test_put();
		else if (strequ(argv[1], "strlen"))
			test_strlen();
		else if (strequ(argv[1], "is"))
			test_is();
		else if (strequ(argv[1], "toupper"))
			test_toupper();
		else if (strequ(argv[1], "tolower"))
			test_tolower();
		else if (strequ(argv[1], "strcpy") || strequ(argv[1], "strncpy"))
			test_strcpy();
		else if (strequ(argv[1], "strcat") || strequ(argv[1], "strncat"))
			test_strcat();
		else if (strequ(argv[1], "strlcat"))
			test_strlcat();
		else if (strequ(argv[1], "strcmp") || strequ(argv[1], "strncmp"))
			test_strcmp();
		else if (strequ(argv[1], "strstr") || strequ(argv[1], "strnstr"))
			test_strstr();
		else if (strequ(argv[1], "strchr") || strequ(argv[1], "strrchr"))
			test_strchr();
		else if (strequ(argv[1], "memset"))
			test_memset();
		else if (strequ(argv[1], "bzero"))
			test_bzero();
		else if (strequ(argv[1], "strclr"))
			test_strclr();
		else if (strequ(argv[1], "memalloc"))
			test_memalloc();
		else if (strequ(argv[1], "strnew"))
			test_strnew();
		else if (strequ(argv[1], "strdup"))
			test_strdup();
		else if (strequ(argv[1], "strequ") || strequ(argv[1], "strnequ"))
		{
			test_strequ();
			test_strnequ();
		}
		else if (strequ(argv[1], "itoa"))
			test_itoa();
		else if (strequ(argv[1], "atoi"))
			test_atoi();
		else if (strequ(argv[1], "strsub"))
			test_strsub();
		else if (strequ(argv[1], "strjoin"))
			test_strjoin();
		else if (strequ(argv[1], "strtrim"))
			test_strtrim();
		else if (strequ(argv[1], "strsplit"))
			test_strsplit();
		else if (strequ(argv[1], "memdel"))
			test_memdel();
		else if (strequ(argv[1], "strdel"))
			test_strdel();
		else if (strequ(argv[1], "memcpy"))
			test_memcpy();
		else if (strequ(argv[1], "memmove"))
			test_memmove();
		else if (strequ(argv[1], "memccpy"))
			test_memccpy();
		else if (strequ(argv[1], "memcmp"))
			test_memcmp();
		else if (strequ(argv[1], "memchr"))
			test_memchr();
		else if (strequ(argv[1], "striter"))
			test_striter();
		else if (strequ(argv[1], "striteri"))
			test_striteri();
		else if (strequ(argv[1], "strmap"))
			test_strmap();
		else
		{
			ft_putstr_fd(BRED "Test " BCYAN, 2);
			ft_putstr_fd(argv[1], 2);
			ft_putendl_fd(BRED " not found!" RESET, 2);
		}
	}
	return (0);
}
