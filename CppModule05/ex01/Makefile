NAME = Form
FILES = main.cpp Bureaucrat.cpp Form.cpp
FLAGS = c++ -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(FLAGS) $(FILES) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re