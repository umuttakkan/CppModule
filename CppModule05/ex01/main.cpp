#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    try{
        Bureaucrat a("Umut", 110);
        Form b("Talha", 140, 120);
        a.signForm(b);
    }
     catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }

    {
        Bureaucrat b("Martin", 10);
        Form x("Alper", 5, 10);
        b.signForm(x);
    }

    try{
        Bureaucrat c("benbaho", 100);
        std::cout << c;
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }
}