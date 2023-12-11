#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << i->getType() << std::endl;
    std::cout << j->getType() << std::endl;
    i->makeSound();
    j->makeSound();

    const Animal *meta[6];
    for (size_t i = 0; i < 6; i++)
    {
        if (i >= 3)
            meta[i] = new Dog();
        else 
            meta[i] = new Cat();
    }
    for (size_t i = 0; i < 6; i++)
        delete meta[i];
    delete i;
    delete j;

    Dog x;
    Cat y;
    std::cout << x.getBrain()->getIdeas()[0] << std::endl;
    std::cout << y.getBrain()->getIdeas()[0] << std::endl;

    return 0;
}