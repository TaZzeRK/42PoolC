# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/01 01:58:30 by mskaroup          #+#    #+#              #
#    Updated: 2015/11/06 17:31:16 by mskaroup         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = do-op

SRC = ./srcs/doop.c ./srcs/fct.c ./srcs/opp.c

INCLUDE = ./includes/doop.h ./includes/fct.h ./includes/opp.h

OBJET = doop.o fct.o opp.o

FLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) $(INCLUDE)
	$(CC) $(OBJET) -o $(NAME)

clean:
	/bin/rm -f doop.o fct.o opp.o ./includes/doop.h.gch ./includes/fct.h.gch \
./includes/opp.h.gch

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
