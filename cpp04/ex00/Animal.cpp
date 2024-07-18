#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal" << " spawned !" << std::endl;
}

Animal::Animal( const Animal &cpy ) {
    this->type = cpy.type;
}

Animal& Animal::operator=( const Animal &inst ) {
    if (this != &inst)
    {
        this->type = inst.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal" << " died" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal can't make a sound!" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}