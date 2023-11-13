# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 11:50:13 by sbadakh           #+#    #+#              #
#    Updated: 2023/11/10 12:09:42 by sbadakh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC=gcc
FLAGS=-Wall -Wextra -Werror
NAME=ft_display_file
SRC=ft_display_file.c
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(GCC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(GCC) $(FLAGS) -c $<
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all