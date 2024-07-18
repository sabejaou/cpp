#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
  private:
    std::string name;
    Weapon *weapon;
  public:
    HumanA(std::string name, Weapon &weapon);
    // HumanA(const HumanA &cpy);
    ~HumanA(void);
    HumanA & operator=(HumanA &);
    void attack(void);
};

#endif