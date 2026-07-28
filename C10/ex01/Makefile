CC = cc
CFLAGS = -Wall -Wextra -Wall
TARGET = ft_cat
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
