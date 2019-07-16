/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:20:56 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/16 17:37:12 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** see https://jameshfisher.com/2016/11/23/c-varargs/
**
** formats:
** %c = character (type size_t)
** %s = string (type STR)
** %p = colour (type STR)
** %i = integer (type long long)
** %u = unsigned number (type unsigned long long)
*/

static void	printf_parse_format(char format, va_list argp)
{
	if (format == '%')
		ft_putchar('%');
	else if (format == 'c')
		ft_putchar(va_arg(argp, size_t));
	else if (format == 's')
		ft_putstr(va_arg(argp, STR));
	else if (format == 'p')
		put_clr(va_arg(argp, STR));
	else if (format == 'i')
		ft_putnbr(va_arg(argp, long long));
	else if (format == 'u')
		ft_putunbr(va_arg(argp, unsigned long long));
	else
		ft_putstr_fd("Not implemented", 1);
}

void		ft_printf(STR format, ...)
{
	va_list				argp;

	va_start(argp, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			printf_parse_format(*format, argp);
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(argp);
}
