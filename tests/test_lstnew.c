/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:09:24 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/06 11:50:14 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_lstnew(void)
{
	t_list	*list;
	t_list	*tmpelem;

	list = ft_lstnew("test", sizeof(char) * 5);
	tmpelem = ft_lstnew("test2", sizeof(char) * 6);
	list->next = tmpelem;
	tmpelem = ft_lstnew("test03", sizeof(char) * 7);
	list->next->next = tmpelem;
	tmpelem = NULL;
	print_list(list);
	ft_putstr(BWHITE "ft_lstnew" RESET ": output should be 5,test \\n");
	ft_putendl(" 6,test2 \\n 7,test03");
}
