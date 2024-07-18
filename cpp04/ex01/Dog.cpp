#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    this->Brain = new class Brain();
    std::cout << "Dog" << " spawned !" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog" << " died" << std::endl;
    std::cout << this->type << " ";
    delete this->Brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}