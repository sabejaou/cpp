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
    (void)inst;
    Zombie *a = NULL;
    a->name = inst.name;
    return (*a);
}

void    Zombie::announce(void)
{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
