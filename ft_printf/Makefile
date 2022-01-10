# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 18:26:38 by tnamir            #+#    #+#              #
#    Updated: 2021/12/13 18:45:08 by aourhzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- Makefile -*-

NAME = libftprintf.a

SRC 	= ft_putstr.c ft_puthex.c ft_putnbr.c ft_putchar.c ft_putadd.c ft_printf.c \

OBJ		= ft_putstr.o ft_puthex.o ft_putnbr.o ft_putchar.o ft_putadd.o ft_printf.o \

BNS_SRC = ft_putstr_bonus.c ft_puthex_bonus.c ft_putnbr_bonus.c ft_putchar_bonus.c ft_putadd_bonus.c ft_printf_bonus.c argument_man.c flags_man.c \

BNS_OBJ = ft_putstr_bonus.o ft_puthex_bonus.o ft_putnbr_bonus.o ft_putchar_bonus.o ft_putadd_bonus.o ft_printf_bonus.o argument_man.o flags_man.o\


all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
	@ar rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	@gcc -Wall -Werror -Wextra -c $(SRC)

$(BNS_OBJ): $(BNS_SRC)
	@gcc -Wall -Werror -Wextra -c $(BNS_SRC)

clean:
	@rm -f $(OBJ) $(BNS_OBJ)

fclean: clean
	@rm -f $(NAME)

bonus: all $(BNS_OBJ) ft_printf_bonus.h
	@ar rcb ft_printf.o $(NAME) $(BNS_OBJ)

re: fclean all

.PHONY: clean fclean bonus re