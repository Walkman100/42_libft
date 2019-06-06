/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:13:33 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/06 11:50:38 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static t_list	*lstmap_delegate(t_list *elem)
{
	if (*(char *)(elem->content) > '6')
		*(char *)(elem->content) = '1';
	return (elem);
}

void			test_lstmap(void)
{
	t_list	*list;
	t_list	*list2;

	list = ft_lstnew("8", 1);
	ft_lstadd(&list, ft_lstnew("7", 1));
	ft_lstadd(&list, ft_lstnew("6", 1));
	ft_lstadd(&list, ft_lstnew("5", 1));
	list2 = ft_lstmap(list, &lstmap_delegate);
	list->content = "9";
	list->next->next->content = "9";
	print_list(list2);
	ft_putendl(BWHITE "ft_lstmap" RESET ": output should be 1,5 1,6 1,1 1,1");
}
