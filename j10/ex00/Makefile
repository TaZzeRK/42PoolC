# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/31 00:41:17 by mskaroup          #+#    #+#              #
#    Updated: 2015/11/01 02:46:27 by mskaroup         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
	  ./srcs/ft_strlen.c ./srcs/ft_swap.c

INCLUDE = ./includes

OBJET = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME) :
	gcc -c $(SRC) -I $(INCLUDE)
	ar rc $(NAME) $(OBJET)

clean:
	/bin/rm -f $(OBJET)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
