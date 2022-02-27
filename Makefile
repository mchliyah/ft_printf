# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 12:33:10 by mchliyah          #+#    #+#              #
#    Updated: 2021/11/26 17:51:54 by mchliyah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = @gcc

CFLAG =  -Wall -Werror -Wextra -c

RM = @rm -f

AR = @ar -rc

FILES=	ft_printf.c		\
		ft_putchar.c	\
		ft_putnbr.c		\
		ft_putnbr_un.c	\
		ft_putstr.c		\
		ft_putadres.c	\
		ft_putnbrlhex.c	\
		ft_putnbruphex.c

OBJECTS = ft_printf.o	\
		ft_putchar.o	\
		ft_putnbr.o		\
		ft_putnbr_un.o	\
		ft_putstr.o		\
		ft_putadres.o	\
		ft_putnbrlhex.o	\
		ft_putnbruphex.o

all : $(NAME)

$(NAME) :  $(OBJECTS)
	$(CC) $(CFLAG) $(FILES)
	$(AR) $(NAME) $(OBJECTS)
	@echo "[LIBFT CREATED!]"

clean : 
	$(RM) $(OBJECTS) $(BONUOBJ)
	@echo "[OBJECTS DELETED!]"

fclean : clean
	$(RM) $(NAME)
	@echo "[LIBFTPRINTF.A DELTED!]"

re : fclean all

rebonus : fclean bonus
