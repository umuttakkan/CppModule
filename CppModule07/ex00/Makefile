NAME = WhatEver
SRCS = main.cpp
FLAGS = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
	$(FLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)
re: clean all

.PHONY: all clean re