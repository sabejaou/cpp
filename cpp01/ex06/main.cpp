#include "Harl.hpp"

t_level valuearg(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (size_t i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            return ((t_level)i);
    }
    return (OTHER);
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (1);
    Harl harl;

    harl.complain(valuearg(av[1]));
    return (0);
}