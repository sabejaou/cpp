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

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->name << " have been destroyed" << std::endl;
}

void    DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap " << this->name << " A.K.A " << this->ClapTrap::name << std::endl;
}