#pragma once

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(std::string name);
        ~WrongCat();
        void makeSound() const;
};