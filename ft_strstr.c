/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:25:50 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/07 10:55:35 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

STR	ft_strstr(const STR haystack, const STR needle)
{
	int i;

	if (*needle == '\0')
		return ((STR)haystack);
	while (*haystack != '\0')
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			i++;
			if (needle[i] == '\0')
				return ((STR)haystack);
		}
		haystack++;
	}
	return (NULL);
}
