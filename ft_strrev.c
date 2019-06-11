/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:04:36 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/11 13:43:06 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		slen;
	char	tmp;

	i = 0;
	slen = ft_strlen(str);
	while (i < slen / 2)
	{
		tmp = str[i];
		str[i] = str[slen - i - 1];
		str[slen - i - 1] = tmp;
		i++;
	}
	return (str);
}
