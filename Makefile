SRC = if_error.c main.c modify_val.c print_sudo.c

NAME = sudoku_solver

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -W $(SRC) -o $(NAME) -I./include

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
