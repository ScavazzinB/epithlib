
NAME	= test

SRCS	= $(wildcard src/*.c) \
	main.c \

OBJS	= $(SRCS:.c=.o)

CFLAGS	= -I ./include -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJS)
		gcc -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	rm -rf $(OBJS)
	rm -rf *gcda
	rm -rf *gcno
	rm -rf tests/*unit_tests*


fclean:	clean
	rm -rf $(NAME)
	make fclean -C src/

re:	fclean all

unit_tests: re
	gcc ./tests/*.c $(SRCS) $(TESTS) -o ./tests/unit_tests

tests_run: unit_tests
	./tests/unit_tests