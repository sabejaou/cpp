#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal" << " spawned !" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &cpy ) {
    this->type = cpy.type;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &inst ) {
    if (this != &inst)
    {
        this->type = inst.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal" << " died" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal can't make a sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}