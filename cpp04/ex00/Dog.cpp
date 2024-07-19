#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Dog" << " spawned !" << std::endl;
}

Dog::Dog( const Dog &cpy ) {
    this->type = cpy.type;
    std::cout << "Dog" << " spawned by copy!" << std::endl;
}

Dog& Dog::operator=( const Dog &inst ) {
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog" << " died" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}