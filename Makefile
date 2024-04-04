CC = cc
CFLAGS = -Wall -Werror -Wextra
LIB_DIR = ./sourcefiles
LIB_NAME = libft.a
INC_DIR = &(LIB_DIR)

SRC = main.c
OBJ = $(SRC:.c=.o)

all: program

program: $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^ -L$(LIB_DIR) -lft

%.o: %.c
	@$(CC) $(CFLAGS) -I$(INC_DIR) -c -o $@ $<

clean:
	rm -f $(OBJ) program

.PHONY: all clean
