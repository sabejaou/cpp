#include "Zombie.hpp"

int main()
{
    Zombie *a = new Zombie("Memory");
    randomChump("Temporary");
    a->announce();
    delete a;
}