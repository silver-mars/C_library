NAME = libft.a
SRC = ft_*.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
COMPILE = gcc $(CFLAGS) -c
LIB = ar rcs $(NAME)
RM = rm -f

all: $(NAME)

$(NAME):
	$(COMPILE) $(SRC)
	$(LIB) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
