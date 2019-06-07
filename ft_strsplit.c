/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:25:47 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/07 18:08:54 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_split_count(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			i++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

/*
** i is set to -1 because it is increased before the loop runs
**
** the ((rtn [i] = ft_strsub(s, 0, currlen)) == NULL)
** sets rtn[i] to a value and checks for NULL
*/

char		**ft_strsplit(char const *s, char c)
{
	char	**rtn;
	int		i;
	int		arrcount;
	int		currlen;

	if (!s)
		return (NULL);
	arrcount = get_split_count(s, c);
	rtn = ft_memalloc(sizeof(*rtn) * (arrcount + 1));
	if (!rtn)
		return (NULL);
	i = -1;
	while (i++ < arrcount)
	{
		while (*s == c)
			s++;
		currlen = 0;
		while (s[currlen] != c)
			currlen++;
		if ((rtn[i] = ft_strsub(s, 0, currlen)) == NULL)
			return (NULL);
		s += currlen;
	}
	rtn[arrcount] = NULL;
	return (rtn);
}
