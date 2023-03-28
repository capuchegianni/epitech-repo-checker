##
## EPITECH PROJECT, 2022
## GIANTMAN
## File description:
## Makefile to compile giantman
##

SRC = 	main.c										\
		uncompress_textfiles.c						\
		uncompress_images.c 						\
		../common_functions/parse_args.c 			\
		../common_functions/my_str_to_word_array.c	\

OBJ = $(SRC:.c=.o)

NAME = giantman

WARNING_FLAGS := -Wall -Wextra -W -g

LIB_FLAGS := -I include/ -L ../lib/ -lmy

all: $(NAME)

build_lib:
	make -sC ../lib/my/

$(NAME): $(OBJ) build_lib
	gcc $(SRC) $(WARNING_FLAGS) -o $(NAME) $(LIB_FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *.gcda
	rm -f *.gcno

re: fclean all
	make clean

unit_tests: re
	gcc $(SRC) ../tests/ -lcriterion --coverage -L../lib -lmy

tests_run: unit_tests
	./$(NAME)

.PHONY: all clean fclean re
