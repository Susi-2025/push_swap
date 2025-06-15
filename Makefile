# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/12 11:30:17 by vinguyen          #+#    #+#              #
#    Updated: 2025/06/15 12:49:23 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	push_swap.c \
		parsing.c \
		array.c \
		initial.c \
		sort_function.c \
		push.c \
		swap.c \
		rotate.c \
		reverse_rotate.c \
		error_handler.c \
		link_list_operation.c \
		push_swap_utils.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
