#include "RPN.hpp"

int main(int argc, char **argv)
{
    RPN rpn;
    if (argc != 2)
    {
        std::cout << "Error: invalid number of arguments" << std::endl;
        return 1;
    }
    else
    {
        std::string expression = argv[1];
        rpn.calculateRpn(expression);
    }
    return 0;
}