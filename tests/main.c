/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:42:43 by mcarter           #+#    #+#             */
/*   Updated: 2019/05/22 14:16:11 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//#include <stdlib.h>

void	testfunc_i(char *func_name, int input, int test);
void	testfunc_s(char *func_name, char *input, char *test);
int		strequ(const char *str1, const char *str2);

int	main(void) //int argc, char** argv)
{
	ft_putchar_fd('o', 1);
	ft_putchar_fd('e', 2);
	ft_putchar('o');
	ft_putstr_fd(" stdout", 1);
	ft_putstr_fd(" strerr", 2);
	ft_putstr(" stdout\n");
	ft_putendl_fd("stdout", 1);
	ft_putendl_fd("stderr", 2);
	ft_putendl("stdout");
	ft_putnbr_fd(1, 1);
	ft_putchar(' ');
	ft_putnbr_fd(2, 2);
	ft_putchar('\n');
	ft_putnbr(-76365);
	ft_putendl("  (-76365)");
	testfunc_i("ft_strlen1", ft_strlen("123456"), 6);
	testfunc_i("ft_strlen2", ft_strlen("this is a long string"), 21);
	testfunc_i("ft_isalpha1", ft_isalpha('P'), 1);
	testfunc_i("ft_isalpha2", ft_isalpha('>'), 0);
	testfunc_i("ft_isdigit1", ft_isdigit('5'), 1);
	testfunc_i("ft_isdigit2", ft_isdigit('='), 0);
	testfunc_i("ft_isalnum1", ft_isalnum('8'), 1);
	testfunc_i("ft_isalnum2", ft_isalnum('I'), 1);
	testfunc_i("ft_isalnum3", ft_isalnum('|'), 0);
	testfunc_i("ft_isascii1", ft_isascii('X'), 1);
	testfunc_i("ft_isascii2", ft_isascii('6'), 1);
	testfunc_i("ft_isascii3", ft_isascii(']'), 1);
	testfunc_i("ft_isascii4", ft_isascii(128), 0);
	testfunc_i("ft_isprint1", ft_isprint('X'), 1);
	testfunc_i("ft_isprint2", ft_isprint('6'), 1);
	testfunc_i("ft_isprint3", ft_isprint(8), 0);
	testfunc_i("ft_isprint4", ft_isprint(127), 0);
	testfunc_i("ft_toupper1", ft_toupper('c'), 'C');
	testfunc_i("ft_toupper2", ft_toupper('z'), 'Z');
	testfunc_i("ft_toupper3", ft_toupper('5'), '5');
	testfunc_i("ft_tolower1", ft_tolower('G'), 'g');
	testfunc_i("ft_tolower2", ft_tolower('A'), 'a');
	testfunc_i("ft_tolower3", ft_tolower('7'), '7');

	char buf[128] = "2";
	ft_strcpy(buf, "test");
	testfunc_s("ft_strcpy  ", buf, "test");
	ft_strcpy(buf, "2\0\0\0\0\0\0\0\0");
	ft_strncpy(buf, "abcdefghijklmnop", 8);
	testfunc_s("ft_strncpy1", buf, "abcdefgh");
	ft_strncpy(buf, "abcd", 128);
	testfunc_s("ft_strncpy2", buf, "abcd");
	testfunc_s("ft_strcat  ", ft_strcat(buf, "efgh"), "abcdefgh");
	ft_strncpy(buf, "t", 128);
	testfunc_s("ft_strncat1", ft_strncat(buf, "esttesttest", 3), "test");
	testfunc_s("ft_strncat2", ft_strncat(buf, "test", 8), "testtest");

	testfunc_i("ft_strcmp1", ft_strcmp("test", "test"), 0);
	testfunc_i("ft_strcmp2", ft_strcmp("tesu", "test"), 1);
	testfunc_i("ft_strcmp3", ft_strcmp("tess", "test"), -1);
	testfunc_i("ft_strcmp4", ft_strcmp("abcdefghijklmnop", "abcdefghijklmnop"), 0);
	testfunc_i("ft_strcmp5", ft_strcmp("TEST", "test"), -32);
	testfunc_i("ft_strcmp6", ft_strcmp("testtest", "test"), 116);

	testfunc_i("ft_strncmp1", ft_strncmp("test", "test", 50), 0);
	testfunc_i("ft_strncmp2", ft_strncmp("tesu", "test", 3), 0);
	testfunc_i("ft_strncmp3", ft_strncmp("TEST", "test", 2), -32);
	testfunc_i("ft_strncmp4", ft_strncmp("testtest", "test", 4), 0);
	testfunc_i("ft_strncmp5", ft_strncmp("testtest", "test", 500), 116);

	return (0);
}

void	testfunc_i(char *fn, int i, int t)
{
	ft_putstr(fn);
	if (i == t)
		ft_putendl(": Y");
	else
	{
		ft_putstr(": N: i:");
		ft_putnbr(i);
		ft_putstr(" t:");
		ft_putnbr(t);
		ft_putchar('\n');
	}
}

void	testfunc_s(char *fn, char *i, char *t)
{
	ft_putstr(fn);
	if (strequ(i, t))
		ft_putendl(": Y");
	else
	{
		ft_putstr(": N: i:");
		ft_putstr(i);
		ft_putstr(" t:");
		ft_putstr(t);
		ft_putchar('\n');
	}
}

int	strequ(const char *s1, const char *s2)
{
	int i;

	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
