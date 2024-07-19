#pragma once

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat( const WrongCat &cpy );
        WrongCat& operator=( const WrongCat &inst );
        WrongCat(std::string name);
        ~WrongCat();
        void makeSound() const;
};