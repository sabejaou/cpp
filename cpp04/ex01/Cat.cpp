#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    this->Brain = new class Brain();
    std::cout << "Cat" << " spawned !" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat" << " died" << std::endl;
    std::cout << this->type << " ";
    delete this->Brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}