#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
    Zombie *current_zombie = new Zombie(name);
    Zombie *first_zombie = current_zombie;

    for (int j = 0; j < N; j++)
    {
        if (j == N - 1)
            current_zombie->next = NULL;
        else
            current_zombie->next = new Zombie(name);
        current_zombie = current_zombie->next;
    }
    return (first_zombie);
}