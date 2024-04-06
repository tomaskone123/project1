NAME = libft.a
SOURCES = \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_memset.c \


OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror
CC = cc
perms:
	chmod 777 $(SOURCES)
all: $(NAME)
$(NAME): $(OBJECTS)
	$(AR) -r $(NAME) $?
	chmod 777 $(NAME)
%.o: %.c
	$(CC) -c $(CFLAGS) $?
clean:
	rm -f $(OBJECTS)
	rm -f *.so
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all bonus clean fclean re

