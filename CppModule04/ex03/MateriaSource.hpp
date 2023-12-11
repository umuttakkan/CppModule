#ifndef MateriaSource_HPP
#define MateriaSource_HPP


#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    protected:
        AMateria *data[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource &);
        MateriaSource &operator=(const MateriaSource &);
        void learnMateria(AMateria *);
        AMateria *createMateria(std::string const &);

};
#endif