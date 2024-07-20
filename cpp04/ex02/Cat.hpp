#pragma once

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
    private:
        Brain *Brain;
    public:
        Cat();
        Cat(std::string name);
        Cat( const Cat &cpy );
        Cat& operator=( const Cat &inst );
        ~Cat();
        void makeSound() const;
};