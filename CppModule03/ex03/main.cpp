#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    std::string data = "Umut";
    std::string data1 = "Taha";

    DiamondTrap b(data);
    ClapTrap c(data1);
    b.whoAmI();
    b.print_value();
    b.attack(data1);
}