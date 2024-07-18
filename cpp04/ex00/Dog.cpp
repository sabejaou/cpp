#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Dog" << " spawned !" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog" << " died" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}