#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
    this->type = "WrongDog";
    std::cout << "WrongDog" << " spawned !" << std::endl;
}

WrongDog::~WrongDog() {
    std::cout << "WrongDog" << " died" << std::endl;
}

void WrongDog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}