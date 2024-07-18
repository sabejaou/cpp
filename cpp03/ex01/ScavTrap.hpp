#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    private:
        ScavTrap();

    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &cpy);
        ScavTrap& operator=( const ScavTrap &inst );
        ~ScavTrap();
        void attack(std::string& target);
        void guardGate();
};