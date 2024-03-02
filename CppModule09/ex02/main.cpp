#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe p;
	if (!p.argumentsControl(argv, argc))
		return (0);
	p.operation(argv,argc);
}