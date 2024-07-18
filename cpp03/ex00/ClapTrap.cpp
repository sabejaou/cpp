#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
    this->hp = 10;
    this->ep = 10;
    this->dmg = 0;
    this->name = name;
    std::cout << this->name << " spawed !" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &cpy ) {
    this->hp = cpy.hp;
    this->ep = cpy.ep;
    this->dmg = cpy.dmg;
    this->name = cpy.name;
}

ClapTrap& ClapTrap::operator=( const ClapTrap &inst ) {
    if (this != &inst)
    {
        this->hp = inst.hp;
        this->ep = inst.ep;
        this->dmg = inst.dmg;
        this->name = inst.name;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << this->name << " have been destroyed" << std::endl;
}

void    ClapTrap::attack(std::string& target)
{
    if (this->ep > 0)
    {
        std::cout << "ClapTrap " << this->name;
        std::cout << " attacks " << target;
        std::cout << " causing " << this->dmg << " points of damage!" << std::endl;
        this->ep--;
    }
    else
    {
        std::cout << "ClapTrap " << this->name;
        std::cout << " can't attack, charge him !" << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->hp -= amount;
    std::cout << "ClapTrap " << this->name;
    std::cout << " take " << amount << " points of damage!" << std::endl;
    if (hp <= 0)
        delete this;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->ep > 0)
    {
        this->hp += amount;
        std::cout << "ClapTrap " << this->name;
        std::cout << " repair " << amount << " points of his health!" << std::endl;
        this->ep--;
    }
    else
    {
        std::cout << "ClapTrap " << this->name;
        std::cout << " can't repair himself, charge him !" << std::endl;
    }
}

std::string&    ClapTrap::getname()
{
    return (this->name);
}