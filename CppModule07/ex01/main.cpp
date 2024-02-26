#include <iostream>
#include "iter.hpp"

int main()
{
    int data[3] = {1, 2, 3};
    ::iter(data, 3, ::func);
    ::print(data, 3);

    std::string data1[2] = {"umut" , "akkan"};
    ::iter(data1, 2, ::func<std::string>);
    ::print(data1, 2);
}