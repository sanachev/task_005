CC=gcc
FLAGS=-std=c11 -Wall -Werror -Wextra

NAME=house


$(NAME): 
	$(CC) -o ../bin/$(NAME) $(NAME).c

set-format:
	clang-format -style='{BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 110}' -i *.c
	clang-format -style='{BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 110}' -i *.h

check-format:
	clang-format -style='{BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 110}' -n *.c
	clang-format -style='{BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 110}' -n *.h

cpp-check:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h