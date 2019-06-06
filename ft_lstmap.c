/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:05:12 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/06 09:11:13 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*rtn;
	t_list	*rtnloop;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = f(lst);
	rtn = ft_lstnew(tmp->content, tmp->content_size);
	rtnloop = rtn;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		rtnloop->next = ft_lstnew(tmp->content, tmp->content_size);
		rtnloop = rtnloop->next;
		lst = lst->next;
	}
	return (rtn);
}
