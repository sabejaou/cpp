#pragma once

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
    private:
        Brain *Brain;
    public:
        Dog();
        Dog(std::string name);
        ~Dog();
        void makeSound() const;
};