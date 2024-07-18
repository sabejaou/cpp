#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    private:
        FragTrap();

    public:
        FragTrap(std::string name);
        ~FragTrap();
        void attack(std::string& target);
        void highFivesGuys();
};