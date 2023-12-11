#include "Phonebook.hpp"
#include <iostream>

Phonebook::Phonebook()
{
	i = 0;
	y = 0;
	std::cout << "   _______________________________" << std::endl;
	std::cout << " / ----------------------------- \\" << std::endl;
	std::cout << "| |    Welcome to Phonebook!    | |" << std::endl;
	std::cout << "| |                             | |" << std::endl;
	std::cout << "| |   What do you want to do?   | |" << std::endl;
	std::cout << "| |         OPTIONS:            | |" << std::endl;
	std::cout << "| |  ADD - SEARCH - EXIT        | |"   << std::endl;
	std::cout << "|  -----------------------------  |" << std::endl;
	std::cout << "|                                 |" << std::endl;
	std::cout << "|  [1]     [2]     [3]     [4]    |" << std::endl;
	std::cout << "|  ABC     DEF     GHI     JKL    |" << std::endl;
	std::cout << "|                                 |" << std::endl;
	std::cout << "|  [5]     [6]     [7]     [8]    |" << std::endl;
	std::cout << "|  MNO    PQRS     TUV     WXYZ   |" << std::endl;
	std::cout << "|                                 |" << std::endl;
	std::cout << "|      [*]     [0]     [#]        |" << std::endl;
	std::cout << "|                                 |" << std::endl;
	std::cout << " \\_______________________________/" << std::endl;
	std::cout << std::endl;

}

void get_input(std::string &x, std::string message)
{
	std::cout << message << " = ";
	getline(std::cin, x);
	while(x.empty())
	{
		std::cout << message << std::endl;
		getline(std::cin, x);
	}
}

void Phonebook::add()
{
	std::string x;
	if (i == 8)
		i = 0;
	get_input(x, "Please enter a Name");
	data[i].set_name(x);
	get_input(x, "Please enter a Surname");
	data[i].set_surname(x);
	get_input(x, "Please enter a Nickname");
	data[i].set_nickname(x);
	get_input(x, "Please enter a Phone Number");
	data[i].set_phonenumber(x);
	get_input(x, "Please enter a Secret");
	data[i].set_secret(x);
	std::cout << "Contact added!" << std::endl;
	i++;
	if (y != 8)
		y++;
}

void	get_contact(Contact *data, int y)
{
	for(int x = 0; x < y; x++)
	{
		for (int j = 0; j < 45; j++)
		{
			if (j == 0 || j % 11 == 0)
				std::cout << "|";
			else if (j == 6)
			{
				std::cout << x + 1;
			}
			else if (j == 12)
			{
				if (data[x].get_Name().size() > 10)
				{
					std::cout << data[x].get_Name().substr(0,9);
					std::cout << ".";
					j += 9;
				}
				else
				{
					std::cout << data[x].get_Name();
					j += data[x].get_Name().size() - 1;
				}
			}
			else if (j == 23)
			{
				if (data[x].getSurname().size() > 10)
				{
					std::cout << data[x].getSurname().substr(0,9);
					std::cout << ".";
					j += 9;
				}
				else
				{ 
					std::cout << data[x].getSurname();
					j += data[x].getSurname().size() - 1;
				}
			}
			else if (j == 34)
			{
				if (data[x].getNickname().size() > 10)
				{
					std::cout << data[x].getNickname().substr(0,9);
					std::cout << ".";
					j += 9;
				}
				else
				{
					std::cout << data[x].getNickname();
					j += data[x].getNickname().size() - 1;
				}
			}
			else
				std::cout << " ";
			
		}
		std::cout << "\n";
		for (int i = 0; i < 45; i++)
			std::cout << "-";
		std::cout << "\n";
	}
}


void 	print_contact(int row, Contact *data)
{
	std::cout << "Name =  "<< data[row].get_Name()  << std::endl;
    std::cout << "Surname: "<< data[row].getSurname() << std::endl;
    std::cout << "Nickname: "<< data[row].getNickname() << std::endl;
    std::cout << "Phone Number: "<< data[row].get_Phonenumber() << std::endl;
    std::cout << "Darkest Secret: "<< data[row].get_secret() << std::endl;
}

void	Phonebook::search()
{
	int row;
	int x = 0;
	if (y == 0)
		std::cout << "You can't search unless you have contact" << std::endl;
	else
	{
		std::cout << "_____________________________________________" << std::endl;
		std::cout << "|   Index  |   Name   | Surname  | Nickname |" << std::endl;
		std::cout << "_____________________________________________" << std::endl;
		get_contact(data, y);
		while(!x)
		{
			std::cout << "Select row = ";
			std::cin >> row;
			if (row > 0 && row < 9 && !(row > y))
			{
				print_contact(row - 1, data);
				x = 1;
			}
			else
				std::cout << "Error: Invalid row" << std::endl;
		}
	}
	std::cin.clear();
	fflush(stdin);
}