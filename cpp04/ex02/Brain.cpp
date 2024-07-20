#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain" << " spawned !" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain" << " died" << std::endl;
}

Brain::Brain(const Brain &cpy) {
    for (size_t i = 0; i <= 99 ; i++)
        this->ideas[i] = cpy.ideas[i];
}

Brain& Brain::operator=( const Brain &inst )
{
    for (size_t i = 0; i <= 99 ; i++)
        this->ideas[i] = inst.ideas[i];
    return (*this);
}