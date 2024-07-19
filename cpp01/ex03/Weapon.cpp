#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    Weapon::type = type;
    return ;
}

Weapon::~Weapon(void)
{
    std::cout << Weapon::type << " Broke !" << std::endl;
    return ;
}

Weapon::Weapon(const Weapon &cpy)
{
    Weapon::type = cpy.type.c_str();
    return ;
}

Weapon & Weapon::operator=(const Weapon &inst)
{
    Weapon *a = new Weapon(inst.type);
    return (*a);
}

const std::string Weapon::getType(void)
{
    return (Weapon::type);
}

void Weapon::setType(const std::string etype)
{
    Weapon::type = etype;
}