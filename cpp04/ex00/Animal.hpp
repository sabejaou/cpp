#pragma once

#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal( const Animal &cpy );
        Animal& operator=( const Animal &inst );
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;

};