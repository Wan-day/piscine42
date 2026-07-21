# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/21 11:53:31 by dboldino          #+#    #+#              #
#    Updated: 2026/07/21 14:22:50 by dboldino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= cc
CFLAGS	= -Wall -Werror -Wextra
RM	= rm -f

SRC_DIR	= srcs
TARGET	= libft.a

SRCS	= $(SRC_DIR)/ft_putchar.c \
	  $(SRC_DIR)/ft_swap.c \
	  $(SRC_DIR)/ft_putstr.c \
	  $(SRC_DIR)/ft_strlen.c \
	  $(SRC_DIR)/ft_strcmp.c

OBJS 	= $(SRCS:.c=%.o)

$(TARGET): $(OBJS)
	ar rcs $(TARGET) $(OBJS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I includes -c $< -o $@

all:	$(TARGET)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(TARGET)

re:	fclean all

.PHONY: all clean fclean re
