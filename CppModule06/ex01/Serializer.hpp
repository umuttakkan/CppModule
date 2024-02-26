#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include "Data.hpp"

class Serializer
{
    public:
        Serializer();
        ~Serializer();
        Serializer(const Serializer&);
        Serializer &operator=(const Serializer &);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif