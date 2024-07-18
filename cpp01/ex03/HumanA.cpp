#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(&weapon)
{
    HumanA::name = name;
    HumanA::weapon = &weapon;
    return ;
}

HumanA::~HumanA(void)
{
    std::cout << HumanA::name << " died !" << std::endl;
    return ;
}

// HumanA::HumanA(const HumanA &cpy)
// {
//     HumanA::name = cpy.name;
//     HumanA::weapon = cpy.weapon;
//     return ;
// }

HumanA & HumanA::operator=(HumanA &inst)
{
    HumanA *a = new HumanA(inst.name, *inst.weapon);
    return (*a);
}

void HumanA::attack(void)
{
    std::cout << HumanA::name << " attacks with their " << HumanA::weapon->getType() << std::endl;
}