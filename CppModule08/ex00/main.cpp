#include "easyfind.hpp"
#include <vector>
#include <list>

int main ()
{
	std::vector<int> vec;
	
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	int i = easyfind(vec, 2);
	if (i)
		std::cout << i << std::endl; 
	else
		std::cout << "Not found" << std::endl;
	std::list<int> list;
	
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);

	i = easyfind(list, 4);
	if (i)
		std::cout << i << std::endl; 
	else
		std::cout << "Not found" << std::endl;
}
