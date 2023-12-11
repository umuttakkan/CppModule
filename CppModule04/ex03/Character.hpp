#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    protected:
        std::string Name;
        AMateria *data[4];
    public:
        Character();
        ~Character();
        Character(const Character &);
        Character &operator=(const Character &);
        Character(std::string Name);
        std::string const &getName()const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};
#endif