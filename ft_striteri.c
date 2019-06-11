/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:24:53 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/11 12:39:22 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	unsigned int	slen;

	if (!s || !f)
		return ;
	i = 0;
	slen = ft_strlen(s);
	while (i < slen)
	{
		f(i, &s[i]);
		i++;
	}
}
