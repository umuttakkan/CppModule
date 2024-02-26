#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
    static bool srand_called = false;
    if (!srand_called)
    {
        srand(time(0));
        srand_called = true;
    }    
    int i = (rand()%3); 
    switch(i)
    {
        case 0:
            return (new A);
        case 1:
            return (new B);
        case 2:
            return (new C);
    }
    return (NULL);
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "A Cast Failed!" << std::endl;   
    }

    try
    {
        B b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "B Cast Failed!" << std::endl;   
    }

    try
    {
        C c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cout << "C Cast Failed!" << std::endl;   
    }
}

Base::~Base()
{}