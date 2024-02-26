#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
int easyfind(const T &container, int data)
{
	typename T::const_iterator it;
	it = std::find(container.begin(), container.end(), data);
	if (it != container.end())
		return (1);
	else
		return (-1);
}

#endif