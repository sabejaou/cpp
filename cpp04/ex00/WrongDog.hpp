#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
    public:
        WrongDog();
        WrongDog(std::string name);
        ~WrongDog();
        void makeSound() const;
};