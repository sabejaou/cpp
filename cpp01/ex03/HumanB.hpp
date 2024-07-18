#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
  private:
    std::string name;
    Weapon *weapon;
  public:
    HumanB(std::string name);
    // HumanB(const HumanB &cpy);
    ~HumanB(void);
    HumanB & operator=(const HumanB &);
    void attack(void);
    void setWeapon(Weapon &weapon);
};

#endif