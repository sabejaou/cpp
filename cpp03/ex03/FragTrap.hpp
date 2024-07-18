#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    private:
        FragTrap();

    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &cpy);
        FragTrap& operator=( const FragTrap &inst );
        ~FragTrap();
        void attack(std::string& target);
        void highFivesGuys();
};