/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:25:56 by mcarter           #+#    #+#             */
/*   Updated: 2019/05/28 12:00:04 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	sta;
	size_t			len;

	sta = 0;
	while (s[sta] == ' ' || s[sta] == '\n' || s[sta] == '\t')
		s++;
	len = 0;
	while (s[sta + len] != ' ' && s[sta + len] != '\n' && s[sta + len] != '\t')
		len++;
	return (ft_strsub(s, sta, len));
}
