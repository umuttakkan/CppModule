#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <new>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure &);
        Cure &operator=(const Cure &);
        AMateria *clone()const;
        void use(ICharacter &);
        std::string getType()const;
};
#endif