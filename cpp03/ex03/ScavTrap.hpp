#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
    private:
        ScavTrap();

    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        void attack(std::string& target);
        void guardGate();
};