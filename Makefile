# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcaquard <fcaquard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/01 18:10:36 by fcaquard          #+#    #+#              #
#    Updated: 2021/08/04 19:14:08 by fcaquard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC_FOLDER = ./src/
SRCS =							\
	$(SRC_FOLDER)ft_isspace.c	\
	$(SRC_FOLDER)ft_isalnum.c	\
	$(SRC_FOLDER)ft_isalpha.c	\
	$(SRC_FOLDER)ft_isascii.c	\
	$(SRC_FOLDER)ft_isdigit.c	\
	$(SRC_FOLDER)ft_isprint.c	\
	$(SRC_FOLDER)ft_isspace.c	\
	$(SRC_FOLDER)ft_tolower.c	\
	$(SRC_FOLDER)ft_toupper.c	\
	$(SRC_FOLDER)ft_atoi.c		\
	$(SRC_FOLDER)ft_itoa.c		\
	$(SRC_FOLDER)ft_putchar.c	\
	$(SRC_FOLDER)ft_putnbr.c	\
	$(SRC_FOLDER)ft_putstr.c	\
	$(SRC_FOLDER)ft_strlen.c	\
	$(SRC_FOLDER)ft_intlen.c	\
	$(SRC_FOLDER)ft_power.c		\


OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar rs $(NAME) $(OBJS)

clean:
	rm -f $(SRC_FOLDER)*.o

fclean: clean
	rm -f ./$(NAME)

re: fclean all

.PHONY: clean fclean re all