/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:12:08 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/05 12:42:17 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_lstadd(void)
{
	t_list	*list;

	list = ft_lstnew("3", 2);
	ft_lstadd(&list, ft_lstnew("2", 2));
	ft_lstadd(&list, ft_lstnew("1", 2));
	testfunc_s("ft_lstadd1", (char *)list->content, "1");
	testfunc_s("ft_lstadd2", (char *)list->next->content, "2");
	testfunc_s("ft_lstadd3", (char *)list->next->next->content, "3");
}
