#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
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