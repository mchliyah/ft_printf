/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:41:34 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/24 21:57:25 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_chek(const char *str, int i, va_list args)
{
	if (str[i + 1] == 'c')
		ft_putchar(va_arg(args, int));
	else if (str[i + 1] == '%')
		ft_putchar('%');
	else if (str[i + 1] == 's')
		ft_putstr(va_arg(args, char *));
	else if (str[i + 1] == 'd' || str[i + 1] == 'i')
		ft_putnbr(va_arg(args, int));
	else if (str[i + 1] == 'u')
		ft_putnbr_un(va_arg(args, unsigned int));
	else if (str[i + 1] == 'x')
		ft_putnbrlhex(va_arg(args, unsigned int));
	else if (str[i + 1] == 'X')
		ft_putnbruphex(va_arg(args, unsigned int));
	else if (str[i + 1] == 'p')
	{
		ft_putstr("0x");
		ft_putadres(va_arg(args, size_t));
	}
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;

	g_ret = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_chek(str, i, args);
			i++;
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (g_ret);
}
