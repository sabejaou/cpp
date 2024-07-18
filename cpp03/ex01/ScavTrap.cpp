#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hp = 100;
    this->ep = 50;
    this->dmg = 20;

    std::cout << "ScavTrap " << this->name << " spawned !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy.name)
{
    this->hp = cpy.hp;
    this->ep = cpy.ep;
    this->dmg = cpy.dmg;

    std::cout << "ScavTrap " << this->name << " spawned by copying " << cpy.name << " !"<< std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap &inst )
{
    this->name = inst.name;
    this->hp = inst.hp;
    this->ep = inst.ep;
    this->dmg = inst.dmg;
    return (*this);
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