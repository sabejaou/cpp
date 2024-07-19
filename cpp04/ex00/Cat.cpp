#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Cat" << " spawned !" << std::endl;
}

Cat::Cat( const Cat &cpy ) {
    this->type = cpy.type;
}

Cat& Cat::operator=( const Cat &inst ) {
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat" << " died" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}