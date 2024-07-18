#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
    ScavTrap *a = new ScavTrap("Robert");
    ClapTrap *b = new ClapTrap("Bob");
    FragTrap *c = new FragTrap("Bobert");

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

    c->highFivesGuys();
    
    std::cout << a->getname() << " says : \"No you morron!\"" << std::endl;

    c->attack(a->getname());
    a->takeDamage(c->getdmg());
    c->attack(a->getname());
    a->takeDamage(c->getdmg());
    c->attack(a->getname());
    a->takeDamage(c->getdmg());
    c->attack(a->getname());
    a->takeDamage(c->getdmg());
    c->attack(a->getname());
    a->takeDamage(c->getdmg());
    a->attack(c->getname());

    std::cout << std::endl;
    delete a;
    delete b;
}