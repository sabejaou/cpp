#pragma once

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    private:
        DiamondTrap();
        std::string name;
    public:
        DiamondTrap(std::string name);
        ~DiamondTrap();
        using ScavTrap::attack;
        void whoAmI();
};