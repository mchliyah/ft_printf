/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:49:14 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/26 17:37:01 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_un(unsigned int n)
{
	unsigned int	nb;

	nb = n;
	if (nb >= 10)
	{
		ft_putnbr_un(nb / 10);
		nb = nb % 10;
	}
	ft_putchar(nb + '0');
}
