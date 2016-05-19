CC	=	gcc

SRC	=	src/get_line.c		\
		src/minishell_cmd.c	\
		src/minishell_display.c	\
		src/rb_show_word_tab.c	\
		src/rb_str_to_wordtab.c	\
		src/basics.c		\
		src/alloc.c		\
		src/main.c

FLAG	=	-I./src -Wextra -Wall -Werror

NAME	=	Minishell

OBJ	=	$(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(OBJ)

re:	fclean all

.PHONY: all clean fclean re

