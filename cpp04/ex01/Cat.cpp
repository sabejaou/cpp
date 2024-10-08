#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    this->Brain = new class Brain();
	for (size_t i = 0; i <= 99 ; i++)
        this->Brain->ideas[i] = "meoooooooow.";
    std::cout << "Cat" << " spawned !" << std::endl;
}

Cat::Cat( const Cat &cpy ) {
    this->type = cpy.type.c_str();
    for (size_t i = 0; i <= 99 ; i++)
        this->Brain->ideas[i] = cpy.Brain->ideas[i].c_str();
	std::cout << "Cat" << " spawned by copy!" << std::endl;
}

Cat& Cat::operator=( const Cat &inst ) {
	for (size_t i = 0; i <= 99 ; i++)
        this->Brain->ideas[i] = inst.Brain->ideas[i].c_str();
    return *this;
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