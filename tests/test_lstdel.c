/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:11:35 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/05 11:29:25 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	lstdeltestdelegate(void *mem, size_t size)
{
	ft_memdel(&mem);
	size++;
}

void		test_lstdel(void)
{
	t_list	*list;

	list = ft_lstnew("1", 2);
	list->next = ft_lstnew("2", 2);
	list->next->next = ft_lstnew("3", 2);
	ft_lstdel(&list, &lstdeltestdelegate);
	print_list(list);
	testfunc_s("ft_lstdel", (char *)list, NULL);
}
