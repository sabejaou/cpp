#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    this->hp = 100;
    this->ep = 50;
    this->dmg = 20;

    std::cout << "ScavTrap " << this->name << " spawned !" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->name << " have been destroyed" << std::endl;
}

void    ScavTrap::attack(std::string& target)
{
    if (this->ep > 0 && this->hp > 0)
    {
        std::cout << "ScavTrap " << this->name;
        std::cout << " attacks " << target;
        std::cout << " causing " << this->dmg << " points of damage!" << std::endl;
        this->ep--;
    }
    else if (this->hp > 0)
    {
        std::cout << "ScavTrap " << this->name;
        std::cout << " can't attack, charge him !" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << this->name;
        std::cout << " can't attack, he is deactivated" << std::endl;
    }
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->name << " is keeping the gate." << std::endl;
}