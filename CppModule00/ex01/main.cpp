#include "Phonebook.hpp"

int main()
{
	Phonebook value;
	std::string data;
	while(1)
	{
		std::cout << "> ";
		getline(std::cin, data);
		if (data == "ADD")
			value.add();
		else if (data == "SEARCH")
			value.search();
		else if (data == "EXIT")
			break ;
		else
			std::cout << "Enter a valid command!" << std::endl;
	}
}