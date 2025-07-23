# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 16:05:03 by vinguyen          #+#    #+#              #
#    Updated: 2025/07/23 14:59:41 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_DIR = .
OBJ_DIR = Object

#Library files
LIBFT_DIR = libft
LIBFT_NAME = $(LIBFT_DIR)/libft.a
LIBFT_SRC = $(wildcard $(LIBFT_DIR)/*.c)
LIBFT_OBJ = $(LIBFT_SRC:.c=.o)

#Project file

SRC =	0_push_swap.c \
		1_parsing.c \
		2_initial.c \
		3_sort_algorithm.c \
		3a_swap_rotate_command.c \
		3b_push_command.c \
		3c_sort_tiny.c \
		3d_sort_big.c \
		8_utils.c \
		9a_free_handler.c \
		9b_error_handler.c \
		
OBJ = $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRC))

CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(OBJ_DIR) $(LIBFT_NAME) $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

#Build library
$(LIBFT_NAME): $(LIBFT_OBJ)
	ar rcs $@ $^

#Compile library object files
$(LIBFT_DIR)/%.o: $(LIBFT_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

#Compile project obj files into Object folder
$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Build final executable
$(NAME): $(OBJ) $(LIBFT_NAME)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT_NAME) -o $(NAME)

#cleaning
clean:
	rm -rf $(OBJ_DIR)
	rm -f $(LIBFT_OBJ)

fclean: clean
	rm -f $(NAME) $(LIBFT_NAME)

re: fclean all

.PHONY: all clean fclean re
