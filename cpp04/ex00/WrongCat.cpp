#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat" << " spawned !" << std::endl;
}

WrongCat::WrongCat( const WrongCat &cpy ) {
    this->type = cpy.type;
}

WrongCat& WrongCat::operator=( const WrongCat &inst ) {
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat" << " died" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}