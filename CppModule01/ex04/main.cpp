#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

void ft_read_file(std::string &s1, std::string &s2, std::ifstream &file, char *argv)
{
	std::string line;
	std::string r_file = argv;
	r_file += ".replace";
	std::ofstream replace_file(r_file);
	while(std::getline(file, line))
	{
		size_t found = line.find(s1);
		while(found != std::string::npos) 
		{
			line.erase(found, s1.length());
			line.insert(found, s2);
			found = line.find(s1);
		}
		replace_file << line << std::endl;
	}
	replace_file.close();
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream file(argv[1]);
		if(file.good())
		{
			if (file.is_open())
			{
				std::string s1 = argv[2];
				std::string s2 = argv[3];
				ft_read_file(s1, s2, file, argv[1]);
			}
			else
				std::cout << "File could not be opened" << std::endl;
		}
		else
			std::cout << "File not found" << std::endl;
	}
	else 
		std::cout << "Arguments Error!" << std::endl;
	return (0);
}