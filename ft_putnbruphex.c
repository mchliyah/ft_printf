/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbruphex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:47:21 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/26 17:37:44 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbruphex(unsigned int n)
{
	unsigned int	nb;
	char			*base;

	nb = n;
	base = "0123456789ABCDEF";
	if (n > 15)
		ft_putnbruphex(n / 16);
	ft_putchar(base[n % 16]);
}
