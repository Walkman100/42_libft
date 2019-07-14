/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:49 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/14 19:55:19 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	testfunc_i(const STR fn, int i, int e)
{
	put_clr(BWHITE);
	ft_putstr(fn);
	put_clr(RESET);
	if (i == e)
	{
		ft_putstr(": [");
		put_clr(BGREEN);
		ft_putstr("Y");
		put_clr(RESET);
		ft_putendl("]");
	}
	else
	{
		if (isatty(1))
			ft_putstr(": [" BRED "N" RESET "]: in:" BMAGENTA);
		else
			ft_putstr(": [N]: in:");
		ft_putnbr(i);
		put_clr(RESET);
		ft_putstr(" expected:");
		put_clr(CYAN);
		ft_putnbr(e);
		put_clr(RESET);
		ft_putchar('\n');
	}
}

void	testfunc_s(const STR fn, const STR i, const STR e)
{
	put_clr(BWHITE);
	ft_putstr(fn);
	put_clr(RESET);
	if (strequ(i, e))
	{
		ft_putstr(": [");
		put_clr(BGREEN);
		ft_putstr("Y");
		put_clr(RESET);
		ft_putendl("]");
	}
	else
	{
		if (isatty(1))
			ft_putstr(": [" BRED "N" RESET "]: in:" BMAGENTA);
		else
			ft_putstr(": [N]: in:");
		if (i == NULL)
			ft_putstr("NULL");
		else
			ft_putstr(i);
		put_clr(RESET);
		ft_putstr(" expected:");
		put_clr(CYAN);
		if (e == NULL)
			ft_putstr("NULL");
		else
			ft_putstr(e);
		put_clr(RESET);
		ft_putchar('\n');
	}
}

int		strequ(const STR s1, const STR s2)
{
	int i;

	if (s1 == NULL && s2 == NULL)
		return (1);
	else if (s1 == NULL || s2 == NULL)
		return (0);
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

void	print_list(t_list *list)
{
	size_t	i;

	while (list)
	{
		ft_putnbr(list->content_size);
		ft_putstr(" bytes: ");
		i = 0;
		while (i < list->content_size)
		{
			ft_putchar(((STR)list->content)[i]);
			i++;
		}
		ft_putchar('\n');
		list = list->next;
	}
}

void	print_list_i(t_list *list)
{
	while (list)
	{
		ft_putnbr(list->content_size);
		ft_putstr(" bytes: ");
		ft_putnbr(*(int *)list->content);
		ft_putchar('\n');
		list = list->next;
	}
}
