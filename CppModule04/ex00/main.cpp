#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();


    WrongAnimal *meta1 = new WrongAnimal();
    WrongAnimal *cat = new WrongCat();

    meta1->makeSound();
    cat->makeSound();

    delete meta;
    delete j;
    delete i;
    delete meta1;
    delete cat;
    return 0;
}