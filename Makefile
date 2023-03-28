##
## EPITECH PROJECT, 2022
## PROJECT_NAME
## File description:
## Makefile to compile project_name
##

all:
	make -sC giantman/
	make -sC antman/

clean:
	make clean -sC lib/my/
	make clean -sC giantman/
	make clean -sC antman/
	rm -f $(OBJ)

fclean: clean
	make fclean -sC lib/my/
	make fclean -sC giantman/
	make fclean -sC antman/
	rm -f $(NAME)
	rm -f coding-style-reports.log

re: fclean all
	make clean

tests_run:
	make tests_run -sC giantman/
	make tests_run -sC antman/

.PHONY: all clean fclean re
