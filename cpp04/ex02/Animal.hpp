#pragma once

#include <iostream>
#include "Brain.hpp"

class Animal{
    protected:
        Animal();
        Animal( const Animal &cpy );
        std::string type;
    public:
        Animal& operator=( const Animal &inst );
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;

};