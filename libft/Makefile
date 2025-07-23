# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 10:57:16 by vinguyen          #+#    #+#              #
#    Updated: 2025/07/23 15:35:49 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_atoi.c \
       ft_bzero.c \
       ft_free_triptr.c \
       ft_printf.c \
       ft_putchar.c \
       ft_putnbr_base.c \
       ft_putnbr_base_unsigned.c \
       ft_putptr.c \
       ft_putstr.c \
       ft_split.c \
       ft_strchr.c \
       ft_strlen.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
