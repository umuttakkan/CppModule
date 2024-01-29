#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat a("Umut", 160);
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }

    try{
        Bureaucrat b("Martin", -1);
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }

    try{
        Bureaucrat c("Talha", 100);
        std::cout << c;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        Bureaucrat d("Alper", 5);
        for (size_t i = 0; i < 6; i++)
        {
            if (i == 0)
                std::cout << d << "\n";
            d.incrementGrade();
            std::cout << d << "\n";
        }
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}