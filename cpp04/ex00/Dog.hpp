#pragma once

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog( const Dog &cpy );
        Dog& operator=( const Dog &inst );
        Dog(std::string name);
        ~Dog();
        void makeSound() const;
};