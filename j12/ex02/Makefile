# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/07 03:36:16 by mskaroup          #+#    #+#              #
#    Updated: 2015/11/07 04:44:56 by mskaroup         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
SRC = ft_tail.c
OBJ = ft_tail.o
 
all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
