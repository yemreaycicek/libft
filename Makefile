NAME    = libft.a

CC      = cc
CFLAGS  = -Wall -Wextra -Werror

AR      = ar rcs
RM      = rm -f

SRC     = ft_isalpha.c \
          ft_isdigit.c \
          ft_isalnum.c
OBJ     = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
