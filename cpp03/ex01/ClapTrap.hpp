#pragma once

#include <iostream>

class ClapTrap{
    protected:
        std::string name;
        int hp;
        int ep;
        int dmg;
    public:
        ClapTrap(std::string name);
        ClapTrap( const ClapTrap &cpy );
        ClapTrap& operator=( const ClapTrap &inst );
        ~ClapTrap();
        void attack(std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void deleteTrap(ClapTrap *&del);
        std::string &getname();
        int getdmg();
};