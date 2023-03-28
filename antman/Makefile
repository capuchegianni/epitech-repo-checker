##
## EPITECH PROJECT, 2022
## ANTMAN
## File description:
## Makefile to compile antman
##

SRC = 	main.c										\
		compress_textfiles.c 						\
		compress_images.c 							\
		occurence.c									\
		../common_functions/parse_args.c			\
		../common_functions/my_str_to_word_array.c	\

OBJ = $(SRC:.c=.o)

NAME = antman

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

re: fclean all
	make clean

unit_tests: re
	gcc $(SRC) ../tests/ -lcriterion --coverage -L../lib/ -lmy

tests_run: unit_tests
	./$(NAME)

.PHONY: all clean fclean re
