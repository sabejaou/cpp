#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    HumanB::weapon = new Weapon("");
    HumanB::name = name;
    return ;
}

HumanB::~HumanB(void)
{
    std::cout << HumanB::name << " died !" << std::endl;
    return ;
}

HumanB & HumanB::operator=(const HumanB &inst)
{
    HumanB *a = new HumanB(inst.name.c_str());
    a->weapon = inst.weapon;
    return (*a);
}

void    HumanB::setWeapon(Weapon &weapon)
{
    HumanB::weapon = &weapon;
}

void HumanB::attack(void)
{
    if (!HumanB::weapon->getType()[0])
        std::cout << HumanB::name << " attacks with their bare hands" << std::endl;
    else
        std::cout << HumanB::name << " attacks with their " << HumanB::weapon->getType() << std::endl;
}