/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:03:30 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/05 11:25:40 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*tmp;

	current = *alst;
	while (current)
	{
		tmp = current;
		current = current->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = NULL;
	}
	*alst = NULL;
}
