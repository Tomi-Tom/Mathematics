##
## EPITECH PROJECT, 2021
## 106torus
## File description:
## Makefile
##

SRC =	  src/display.c \
	  src/grown.c \
	  src/generation.c \
	  src/error.c \

MAIN =	src/main.c

OBJ =	$(SRC:.c=.o) \
	$(MAIN:.c=.o)

NAME =	106bombyx

INC =	include/

TEST =	unit_tests
TESTS = tests/test_bombyx.c

CC =	gcc
CPPFLAGS = -Wall -Wextra -I $(INC)

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -I $(INC) $(CPPFLAGS) -lm

clean:
	$(RM) $(OBJ)
	$(RM) *.gcda
	$(RM) *.gcno

fclean:	clean
	$(RM) $(NAME)
	$(RM) $(TEST)

re:	fclean all

tests_run:
	$(RM) *.gcda
	$(RM) *.gcno
	$(CC) -o $(TEST) $(SRC) $(TESTS) -I $(INC) --coverage -lcriterion -lm
	./$(TEST)

.PHONY = all clean fclean re tests_run
