#include "Character.hpp"

Character::Character()
{
    std::cout << "Character default constructor called" << std::endl;
}

Character::~Character()
{
    std::cout << "Character " << Name << " destructor called" << std::endl;
    for(int i = 0; i <=3 ; i++)
        delete data[i];
}

Character::Character(const Character &other)
{
    std::cout << "Character copy constructor called" << std::endl;
    *this = other;
}

Character &Character::operator=(const Character &copyData)
{
    std::cout << "Character copy assignment operator called" << std::endl;
    this->Name = copyData.Name;
    for (size_t i = 0; i <= 3; i++)
        this->data[i] = copyData.data[i];    
    return (*this);
}

Character::Character(std::string newName)
{
    Name = newName;
    for(int i = 0; i <= 3; i++)
        data[i] = 0;
}

std::string const &Character::getName()const
{
    return(Name);
}

void Character::equip(AMateria *m)
{
    for (size_t i = 0; i <= 3; i++)
    {
        if (data[i] == 0)
        {
            data[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
        data[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
    AMateria *variable = data[idx];

    if (variable)
        variable->use(target);
    return ;
}