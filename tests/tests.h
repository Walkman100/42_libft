/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:53 by mcarter           #+#    #+#             */
/*   Updated: 2019/09/26 18:38:26 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H
# include <unistd.h>
# include <stdlib.h>
# include "../libft.h"

void	testfunc_i(const STR func_name, int input, int test);
int		strequ(const STR str1, const STR str2);
void	testfunc_s(const STR func_name, const STR input, const STR test);
void	print_list(t_list *list);
void	print_list_i(t_list *list);
void	test_put(void);
void	test_strlen(void);
void	test_is(void);
void	test_toupper(void);
void	test_tolower(void);
void	test_strcpy(void);
void	test_strcat(void);
void	test_strlcat(void);
void	test_strcmp(void);
void	test_strstr(void);
void	test_strchr(void);
void	test_memset(void);
void	test_bzero(void);
void	test_strclr(void);
void	test_memalloc(void);
void	test_strnew(void);
void	test_strdup(void);
void	test_strequ(void);
void	test_strnequ(void);
void	test_itoa(void);
void	test_atoi(void);
void	test_strsub(void);
void	test_strjoin(void);
void	test_strtrim(void);
void	test_strsplit(void);
void	test_memdel(void);
void	test_strdel(void);
void	test_memcpy(void);
void	test_memmove(void);
void	test_memccpy(void);
void	test_memcmp(void);
void	test_memchr(void);
void	test_striter(void);
void	test_striteri(void);
void	test_strmap(void);
void	test_strmapi(void);
void	test_lstnew(void);
void	test_lstdelone(void);
void	test_lstdel(void);
void	test_lstadd(void);
void	test_lstiter(void);
void	test_lstmap(void);
void	test_atol(void);
void	test_debug(void);
void	test_get_th(void);
void	test_get_tw(void);
void	test_strclen(void);
void	test_strrev(void);
void	test_get_next_line(void);
void	test_putunbr(void);
void	test_printf(void);
void	test_puthex(void);
void	test_unbrlen(void);
void	test_strjoin3(void);
void	test_chrcount(void);
void	test_realloc(void);
void	test_parrlen(void);
#endif
