/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:04:28 by mchliyah          #+#    #+#             */
/*   Updated: 2021/11/26 17:43:05 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
//biblio needed in fonctions
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>

int		g_ret; //globale variable for printf return 

//fonctions needed
int		ft_printf(const char *str, ...);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putnbrlhex(unsigned int n);
void	ft_putnbruphex(unsigned int n);
void	ft_putnbr_un(unsigned int n);
void	ft_putstr(char *s);
void	ft_putadres(size_t n);
#endif