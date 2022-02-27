/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadres.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:28:46 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/26 17:36:24 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadres(size_t n)
{
	size_t			nb;
	char			*base;

	nb = n;
	base = "0123456789abcdef";
	if (n > 15)
		ft_putadres(n / 16);
	ft_putchar(base[n % 16]);
}
