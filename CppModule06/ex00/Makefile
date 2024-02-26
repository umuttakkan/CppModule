NAME = Convert
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
CC = c++
SRCS = main.cpp ScalarConverter.cpp

all: $(NAME)

$(NAME):
	$(CC) $(STD) $(FLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re