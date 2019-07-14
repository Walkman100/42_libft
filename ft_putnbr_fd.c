/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:28:36 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/06 10:49:36 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(MAXNBR n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (-n < 0)
		{
			ft_putnbr_fd(-(n / 10), fd);
			ft_putnbr_fd(-(n % 10), fd);
		}
		else
			ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
