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

TARGET = ft_display_file
SRC = main.c
OBJ = main.o

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $@

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -I includes -c -o main.o

all: $(TARGET)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(TARGET)

re:	fclean all

.PHONY: all clean fclean re
