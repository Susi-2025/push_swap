# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 16:05:03 by vinguyen          #+#    #+#              #
#    Updated: 2025/07/01 18:45:37 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_DIR = .
LIB_DIR = Library
OBJ_DIR = Object

#Library files
LIB_NAME = $(LIB_DIR)/library.a
LIB_SRC = $(wildcard $(LIB_DIR)/*.c)
LIB_OBJ = $(LIB_SRC:.c=.o)

#Project file

SRC =	push_swap.c \
		parsing.c \
		read_argument.c \
		initial.c \
		sort_algorithm.c \
		error_handler.c \
		utils.c \
		sort_command.c \

OBJ = $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRC))

#Compiler
CC = cc
CFLAGS = -Wall -Werror -Wextra

#Rules
all: $(OBJ_DIR) $(LIB_NAME) $(NAME)

#Object directory create
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

#Build library
$(LIB_NAME): $(LIB_OBJ)
	ar rcs $@ $^

#Compile library object files
$(LIB_DIR)/%.o: $(LIB_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

#Compile project obj files into Object folder
$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Build final executable
$(NAME): $(OBJ) $(LIB_NAME)
	$(CC) $(CFLAGS) $(OBJ) $(LIB_NAME) -o $(NAME)

#cleaning
clean:
	rm -rf $(OBJ_DIR)
	rm -f $(LIB_OBJ)

fclean: clean
	rm -f $(NAME) $(LIB_NAME)

re: fclean all
