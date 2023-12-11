#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl a;

    if (argc > 1)
        a.complain(argv[1]);
    else 
        return (0);
}