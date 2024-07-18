#include "Zombie.hpp"

int main(int ac, char **av)
{
    if (ac != 3)
        return (1);
    int N = atoi(av[1]);
    Zombie *first_zombie = zombieHorde(N, av[2]);
    Zombie *current_zombie = first_zombie;
    for (int i = 0; i < N; i++){
        current_zombie->announce();
        current_zombie = current_zombie->next;
    }
    for (int i = 0; i < N; i++){
        current_zombie = first_zombie->next;
        delete first_zombie;
        first_zombie = current_zombie;
    }
    return (0);
}