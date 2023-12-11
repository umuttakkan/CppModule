#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal &);
        virtual ~AAnimal();
        AAnimal &operator=(const AAnimal &);
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif 