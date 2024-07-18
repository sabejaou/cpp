#pragma once

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(std::string name);
        ~Dog();
        void makeSound() const;
};