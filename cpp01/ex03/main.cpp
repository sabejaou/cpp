#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"
#include "HumanB.hpp"

int main ()
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

    Weapon bar = Weapon("crude spiked bar");
    HumanB jim("Jim");
    jim.setWeapon(bar);
    jim.attack();
    bar.setType("some other type of bar");
    jim.attack();
    return (0);
}