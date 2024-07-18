#pragma once

#include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal( const WrongAnimal &cpy );
        WrongAnimal& operator=( const WrongAnimal &inst );
        virtual ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;

};