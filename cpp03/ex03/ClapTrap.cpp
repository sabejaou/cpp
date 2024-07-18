#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), ep(10), dmg(0){
    std::cout << "ClapTrap " << this->name << " spawned !" << std::endl;
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
    std::cout << "ClapTrap " << this->name << " have been destroyed" << std::endl;
}

void    ClapTrap::attack(std::string& target)
{
    if (this->ep > 0 && this->hp > 0)
    {
        std::cout << "ClapTrap " << this->name;
        std::cout << " attacks " << target;
        std::cout << " causing " << this->dmg << " points of damage!" << std::endl;
        this->ep--;
    }
    else if (this->hp > 0)
    {
        std::cout << "ClapTrap " << this->name;
        std::cout << " can't attack, charge him !" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name;
        std::cout << " can't attack, he is deactivated" << std::endl;
    }

}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hp > 0)
    {
        this->hp -= amount;
        std::cout << this->name;
        std::cout << " take " << amount << " points of damage!" << std::endl;
        if (this->hp <= 0)
        {
            std::cout << this->name;
            std::cout << " is deactivated !" << std::endl;
        }
    }
    else
    {
        std::cout << this->name;
        std::cout << " can't take damages, he is already deactivated !" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->ep > 0 && this->hp > 0)
    {
        this->hp += amount;
        std::cout << this->name;
        std::cout << " repair " << amount << " points of his health!" << std::endl;
        this->ep--;
    }
    else if (this->hp > 0)
    {
        std::cout << this->name;
        std::cout << " can't repair himself, charge him !" << std::endl;
    }
    else
    {
        std::cout << this->name;
        std::cout << " can't repair himself, he is deactivated!" << std::endl;
    }
}

std::string&    ClapTrap::getname()
{
    return (this->name);
}

int ClapTrap::getdmg()
{
    return (this->dmg);
}
