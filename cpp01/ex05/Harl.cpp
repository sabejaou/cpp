#include "Harl.hpp"

Harl::Harl()
{
    return ;
}

Harl::~Harl(void)
{
    std::cout << "Harl has been beat to death by the manager !" << std::endl;
    return ;
}

Harl::Harl(const Harl &cpy)
{
    (void)cpy;
    return ;
}

Harl & Harl::operator=(const Harl &inst)
{
    (void)inst;
    Harl *a = NULL;
    return (*a);
}

void    Harl::complain(std::string level)
{
    void    (Harl::*ptrs[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (size_t i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*ptrs[i])();
        }
    }
}

void Harl::debug( void )
{
    std::cout << std::endl << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << std::endl << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << std::endl << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << std::endl << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
