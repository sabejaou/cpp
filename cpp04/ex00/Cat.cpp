#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Cat" << " spawned !" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat" << " died" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}