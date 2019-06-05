/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:03:49 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/05 10:21:32 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	testfunc_i(const char *fn, int i, int e)
{
	ft_putstr(BWHITE);
	ft_putstr(fn);
	ft_putstr(RESET);
	if (i == e)
		ft_putendl(": [" BGREEN "Y" RESET "]");
	else
	{
		ft_putstr(": [" BRED "N" RESET "]: in:" BMAGENTA);
		ft_putnbr(i);
		ft_putstr(RESET " expected:" CYAN);
		ft_putnbr(e);
		ft_putendl(RESET);
	}
}

void	testfunc_s(const char *fn, const char *i, const char *e)
{
	ft_putstr(BWHITE);
	ft_putstr(fn);
	ft_putstr(RESET);
	if (strequ(i, e))
		ft_putendl(": [" BGREEN "Y" RESET "]");
	else
	{
		ft_putstr(": [" BRED "N" RESET "]: in:" BMAGENTA);
		if (i == NULL)
			ft_putstr("NULL");
		else
			ft_putstr(i);
		ft_putstr(RESET " expected:" CYAN);
		if (e == NULL)
			ft_putstr("NULL");
		else
			ft_putstr(e);
		ft_putendl(RESET);
	}
}

int		strequ(const char *s1, const char *s2)
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
			ft_putchar( ((char *)list->content)[i] );
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
