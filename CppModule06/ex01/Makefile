NAME = Serializer
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
CC = c++
SRCS = main.cpp Serializer.cpp

all: $(NAME)

$(NAME):
	$(CC) $(STD) $(FLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re