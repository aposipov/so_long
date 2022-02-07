# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lchristi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/06 14:07:25 by lchristi          #+#    #+#              #
#    Updated: 2022/02/06 14:19:55 by lchristi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = gcc
FLAGS = -Wall -Werror -Wextra
FLAGS_M = -lmlx -framework OpenGL -framework AppKit
RM = rm -rf

HEADER = ./inc/so_long.h ./inc/get_next_line.h

SRC = ./src/so_long.c ./src/map.c\
		./src/get_next_line.c ./src/get_next_line_utils.c

OBJ = $(patsubst %.c,%.o,$(SRC))

all:	$(NAME)

$(NAME): 	$(OBJ)
			$(CC) $(FLAGS) $(FLAGS_M) $(OBJ) -o $(NAME)

%.o:	%.c Makefile $(HEADER)
		$(CC) $(FLAGS) -c $< -o $@

clean:
		$(RM) ${OBJ}
		@echo *.o files is clean

fclean:	clean
		$(RM) so_long

re:	fclean all

.PHONY: all clean fclean re