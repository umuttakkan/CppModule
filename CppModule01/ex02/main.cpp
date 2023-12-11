#include <iostream>
int main ()
{
	std::string data;
	
	data = "HI THIS IS BRAIN";
	
	std::string *stringPTR;
	std::string &stringREF = data;

	stringPTR = &data;

	std::cout << "Memory address of the string variable: " << &data << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "Value of the string variable: " << data << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
}