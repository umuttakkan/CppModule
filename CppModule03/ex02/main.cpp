#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::string data = "Umut";
    std::string value = "Talha";
    ClapTrap x;
    FragTrap y;
    ClapTrap a(value);
    FragTrap b(data);

    b.highFivesGuys();
}