#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    this->Brain = new class Brain();
    std::cout << "Dog" << " spawned !" << std::endl;
}

Dog::Dog( const Dog &cpy ) {
    this->type = cpy.type.c_str();
    for (size_t i = 0; i <= 99 ; i++) {
        this->Brain->ideas[i] = cpy.Brain->ideas[i].c_str();}

	std::cout << "Dog" << " spawned by copy!" << std::endl;
}

Dog& Dog::operator=( const Dog &inst ) {
	for (size_t i = 0; i <= 99 ; i++){
        this->Brain->ideas[i] = inst.Brain->ideas[i].c_str();}

    return *this;
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