# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/07 03:27:48 by mskaroup          #+#    #+#              #
#    Updated: 2015/11/07 03:34:51 by mskaroup         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = ft_cat.c
OBJ = ft_cat.o
 
all: $(NAME)
	 
$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
