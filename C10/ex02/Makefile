CC = cc
CFLAGS = -Wall -Wextra -Wall
TARGET = ft_tail
SRCS = main.c ft_func.c
OBJ = $(SRCS: .c=%.o)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $@

$OBJS: $(SRCS)
	$(CC) $(CFLAGS) -I includes -c $(SRCS) -o main.o

all: $(TARGET)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(TARGET)

re:	fclean all

.PHONY: all clean fclean re
