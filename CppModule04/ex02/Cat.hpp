#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain *data;
    public:
        Cat();
        Cat(const Cat &);
        Cat &operator=(const Cat &);
        ~Cat();
        void makeSound()const;
        Brain *getBrain();
};

#endif