/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrlhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:42:13 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/26 17:37:26 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrlhex(unsigned int n)
{
	unsigned int	nb;
	char			*base;

	nb = n;
	base = "0123456789abcdef";
	if (n > 15)
		ft_putnbrlhex(n / 16);
	ft_putchar(base[n % 16]);
}
