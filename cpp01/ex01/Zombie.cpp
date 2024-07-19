#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    Zombie::name = name;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << "You shot " << Zombie::name << " !" << std::endl;
    return ;
}

Zombie::Zombie(const Zombie &cpy)
{
    (void)cpy;
    return ;
}

Zombie & Zombie::operator=(const Zombie &inst)
{
    this->name = inst.name;
    return (*this);
}

void    Zombie::announce(void)
{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
