#pragma once

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
    public:
        Cat();
        Cat(std::string name);
        ~Cat();
        void makeSound() const;
};