#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (size_t i = 0; i <=3 ; i++)
        data[i] = 0;
    
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for(int i = 0; i <=3 ; i++)
        delete data[i];
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copyData)
{
    std::cout << "MateriaSource copy assignment operator called" << std::endl;
    for (size_t i = 0; i <= 3; i++)
        this->data[i] = copyData.data[i];
    return (*this);
}

void MateriaSource::learnMateria(AMateria *value)
{
    if (!value)
    {
        std::cout << "Attemted to learn but the Materia source is empty" << std::endl;
        return ;
    }
    for (size_t i = 0; i <= 3; i++)
    {
        if (data[i] == 0)
        {
            data[i] = value;
            return ;
        }
    }  
}

AMateria  *MateriaSource::createMateria(std::string const &type)
{
    for (size_t i = 0; i <= 3; i++)
    {
        if ((data[i]->getType() == type))
        { 
            return (data[i]->clone());
        }
    }
    return (NULL);
}