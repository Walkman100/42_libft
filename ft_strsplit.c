/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:25:47 by mcarter           #+#    #+#             */
/*   Updated: 2019/05/28 13:16:56 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**rtn;
	int		i;
	int		arrcount;
	int		currlen;

	i = 0;
	arrcount = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			arrcount++;
			i++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	rtn = ft_memalloc(sizeof(*rtn) * arrcount);
	i = 0;
	while (i < arrcount)
	{
		while (*s == c)
			s++;
		currlen = 0;
		while (s[currlen] != c)
			currlen++;
		rtn[i] = ft_strsub(s, 0, currlen);
		if (rtn[i] == NULL)
			return (NULL);
		s += currlen;
		i++;
	}
	return (rtn);
}
