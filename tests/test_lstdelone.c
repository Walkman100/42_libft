/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:10:54 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/05 11:45:18 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	lstdelonetestdelegate(void *mem, size_t size)
{
	ft_memdel(&mem);
	size++;
}

void		test_lstdelone(void)
{
	t_list	*list;
	t_list	*list2;

	list = ft_lstnew("1", 2);
	list2 = ft_lstnew("2", 2);
	list->next = list2;
	ft_lstdelone(&list, &lstdelonetestdelegate);
	print_list(list);
	print_list(list2);
	testfunc_s("ft_lstdelone1", (char *)list, NULL);
	testfunc_s("ft_lstdelone2", (char *)list2->content, "2");
}
