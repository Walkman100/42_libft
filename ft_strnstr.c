/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:25:40 by mcarter           #+#    #+#             */
/*   Updated: 2019/05/22 12:25:41 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	len_i;

	len_i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len_i < len)
	{
		i = 0;
		while (haystack[i] == needle[i] && (len_i + i) < len)
		{
			i++;
			if (needle[i] == '\0')
				return ((char *)haystack);
		}
		len_i++;
		haystack++;
	}
	return (NULL);
}
