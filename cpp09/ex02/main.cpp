#include "Pmergeme.hpp"
#include <cstdlib>
#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    Array array;
    
    while (i < ac)
    {
        array.push_back(std::atoi(av[i++]));
    }
    i = 0;
    std::cout << std::endl;
        std::cout << "BEFORE: ";
    while (i < ac - 1)
    {
        std::cout << array[i++] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "AFTER: ";
    pmerge(array);
    i = 0;
    while (i < ac - 2)
    {
        if (array[i] > array[i + 1])
        {
            std::cout << std::endl << array[i] << std::endl << array[i + 1] << std::endl;
            std::cout << "NOT SORTED" << std::endl;
            return (-1);
        }
        i++;
    }
    i = 0;
    while (i < ac - 1)
    {
        std::cout << array[i++] << " ";
    }
    std::cout << std::endl;
}