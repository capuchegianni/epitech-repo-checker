##
## EPITECH PROJECT, 2022
## lib-epitech
## File description:
## lib Makefile
##

SRC = 	my_compute_power_rec.c 			\
		my_free_wordarray.c 			\
		my_getnbr.c 					\
		my_isnum.c 						\
		my_nbrtostr.c					\
		my_putchar.c 					\
		my_puterr.c 					\
		my_putfloat.c 					\
		my_putnbr.c 					\
		my_putstr.c 					\
		my_readfile.c 					\
		my_revstr.c 					\
		my_strcat.c 					\
		my_strcmp.c 					\
		my_strcpy.c 					\
		my_strisalpha.c 				\
		my_strlen.c						\

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME) *.o
	cp $(NAME) ../
	cp my.h ../../include/


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re: fclean all
