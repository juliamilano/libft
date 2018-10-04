# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytrubach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 11:56:50 by ytrubach          #+#    #+#              #
#    Updated: 2018/08/20 13:26:21 by ytrubach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

DIR = srcs/

SRC = $(DIR)ft_putchar.c \
	  $(DIR)ft_putstr.c \
	  $(DIR)ft_strcmp.c \
	  $(DIR)ft_strlen.c \
	  $(DIR)ft_swap.c

SRCO = ft_putchar.o \
	   ft_putstr.o \
	   ft_strcmp.o \
	   ft_strlen.o \
	   ft_swap.o

IHEAD = includes

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC) -I $(IHEAD)
	ar rc $(NAME) $(SRCO)

clean: 
	@/bin/rm -f $(SRCO)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
