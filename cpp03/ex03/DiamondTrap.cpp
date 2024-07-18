#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    this->name = name;
    this->ClapTrap::name = name + "_clap_name";
    FragTrap::hp = 100;
    ScavTrap::ep = 50;
    FragTrap::dmg = 30;

    std::cout << "DiamondTrap " << this->name << " spawned !" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy) : ClapTrap(cpy.name), FragTrap(cpy.name), ScavTrap(cpy.name)
{
    this->hp = cpy.hp;
    this->ep = cpy.ep;
    this->dmg = cpy.dmg;

    std::cout << "DiamondTrap " << this->name << " spawned by copying " << cpy.name << " !"<< std::endl;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap &inst )
{
    this->name = inst.name;
    this->hp = inst.hp;
    this->ep = inst.ep;
    this->dmg = inst.dmg;
    return (*this);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->name << " have been destroyed" << std::endl;
}

void    DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap " << this->name << " A.K.A " << this->ClapTrap::name << std::endl;
}