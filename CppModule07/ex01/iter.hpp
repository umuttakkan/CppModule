#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>

template <typename T>
void print(T data, size_t size)
{
    for (size_t i = 0; i < size; i++)
        std::cout << data[i];
    std::cout << std::endl;
}

template <typename T>
void func(T &data)
{
    data += data;
}

template <typename T>
void iter(T *address, size_t size, void (func)(T &data))
{
    for (size_t i = 0; i < size; i++)
        func(address[i]);
}

#endif