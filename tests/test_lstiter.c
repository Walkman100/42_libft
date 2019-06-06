/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:12:49 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/06 11:50:30 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	lstiter_delegate(t_list *elem)
{
	if (*(char *)(elem->content) > '6')
		*(char *)(elem->content) = '1';
}

void		test_lstiter(void)
{
	t_list	*list;

	list = ft_lstnew("8", 1);
	ft_lstadd(&list, ft_lstnew("7", 1));
	ft_lstadd(&list, ft_lstnew("6", 1));
	ft_lstadd(&list, ft_lstnew("5", 1));
	ft_lstiter(list, &lstiter_delegate);
	print_list(list);
	ft_putendl(BWHITE "ft_lstiter" RESET ": output should be 1,5 1,6 1,1 1,1");
}
