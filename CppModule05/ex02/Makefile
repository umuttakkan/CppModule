NAME = AForm
FILES = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
FLAGS = c++ -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(FLAGS) $(FILES) -o $(NAME)

clean:
	rm -f $(NAME)
	@rm -rf *.shrubbery

re: clean all

.PHONY: all clean re