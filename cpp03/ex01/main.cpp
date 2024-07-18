#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap *a = new ScavTrap("Robert");
    ClapTrap *b = new ClapTrap("Bob");

    std::cout << std::endl;
    a->guardGate();
    b->attack(a->getname());
    a->takeDamage(b->getdmg());

    std::cout << std::endl;
    std::cout << "King says : \"ScavTrap Robert, kill the heretic ClapTrap!\"" << std::endl;

    std::cout << std::endl;
    a->attack(b->getname());
    b->takeDamage(a->getdmg());

    b->attack(a->getname());

    std::cout << std::endl;
    delete a;
    delete b;
}