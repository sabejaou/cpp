#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    try {
        std::vector<int>::iterator it = easyfind(vec, 20);
        std::cout << "Element trouvé : " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        std::vector<int>::iterator it = easyfind(vec, 50);
        std::cout << "Element trouvé : " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}