# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/12 11:30:17 by vinguyen          #+#    #+#              #
#    Updated: 2025/06/16 16:08:33 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	push_swap.c \
		parsing.c \
		initial.c \
		error_handler.c \
		sort_function.c \
		sort_tiny.c \
		sort_big.c \
		basic_push.c \
		basic_swap.c \
		basic_rotate.c \
		basic_re_rotate.c \
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
