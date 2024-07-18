#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->hp = 100;
    this->ep = 100;
    this->dmg = 30;

    std::cout << "FragTrap " << this->name << " spawned !" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->name << " have been destroyed" << std::endl;
}

void    FragTrap::attack(std::string& target)
{
    if (this->ep > 0 && this->hp > 0)
    {
        std::cout << "FragTrap " << this->name;
        std::cout << " attacks " << target;
        std::cout << " causing " << this->dmg << " points of damage!" << std::endl;
        this->ep--;
    }
    else if (this->hp > 0)
    {
        std::cout << "FragTrap " << this->name;
        std::cout << " can't attack, charge him !" << std::endl;
    }
    else
    {
        std::cout << "FragTrap " << this->name;
        std::cout << " can't attack, he is deactivated" << std::endl;
    }
}

void    FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->name << " want to do an awesome high five !" << std::endl;
}