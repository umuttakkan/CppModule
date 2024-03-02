#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	BitcoinExchange a;
	if (argc != 2)
		std::cout << "Error: could not open file." << std::endl;
	else
		a.readFiles(argv[1], a);
	return (0); 
}