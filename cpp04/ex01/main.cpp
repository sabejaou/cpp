#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
        const Animal *meta[10];

        for (size_t i = 0; i <= 4; i++)
        {
            std::cout << i << ":" << std::endl;
            meta[i] = new Cat();
        }
        std::cout << std::endl;
        for (size_t i = 5; i <= 9; i++)
        {
            std::cout << i << ":" << std::endl;
            meta[i] = new Dog();
        }
        std::cout << std::endl;
        for (size_t i = 0; i <= 4; i++)
        {
            std::cout << i << ":" << std::endl;
            delete meta[i];
        }
        std::cout << std::endl;
        for (size_t i = 5; i <= 9; i++)
        {
            std::cout << i << ":" << std::endl;
            delete meta[i];
        }
}