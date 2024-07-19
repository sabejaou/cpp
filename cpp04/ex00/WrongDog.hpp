#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
    public:
        WrongDog();
        WrongDog( const WrongDog &cpy );
        WrongDog& operator=( const WrongDog &inst );
        WrongDog(std::string name);
        ~WrongDog();
        void makeSound() const;
};