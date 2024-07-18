#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
    {
        const Animal* meta = new Animal();
        const Animal* i = new Dog();
        const Animal* j = new Cat();
        const Dog *k = new Dog();
        const Cat *l = new Cat();
        std::cout << i->getType() << " " << std::endl;
        std::cout << j->getType() << " " << std::endl;
        std::cout << k->getType() << " " << std::endl;
        std::cout << l->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        k->makeSound();
        l->makeSound();
        meta->makeSound();

        delete meta;
        delete i;
        delete j;
        delete k;
        delete l;
    }
    {
        std::cout << std::endl << std::endl;
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongDog();
        const WrongAnimal* j = new WrongCat();
        const WrongDog *k = new WrongDog();
        const WrongCat *l = new WrongCat();
        std::cout << i->getType() << " " << std::endl;
        std::cout << j->getType() << " " << std::endl;
        std::cout << k->getType() << " " << std::endl;
        std::cout << l->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        k->makeSound();
        l->makeSound();
        meta->makeSound();

        delete meta;
        delete i;
        delete j;
        delete k;
        delete l;
    }
}