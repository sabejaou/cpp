#include <iostream>
#include "Array.hpp"

int main() {
    Array<int> intArray(5);
    std::cout << "Test 1 - Tableau d'entiers avec 5 éléments :\n";
    for (size_t i = 0; i < intArray.size(); i++) {
        intArray[i] = i * 10;  // Assigner des valeurs
        std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
    }

    try {
        std::cout << "Accès à un index hors limites : " << intArray[10] << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    Array<int> copiedArray(intArray);
    std::cout << "\nTest 3 - Copie du tableau d'entiers :\n";
    for (size_t i = 0; i < copiedArray.size(); i++) {
        std::cout << "copiedArray[" << i << "] = " << copiedArray[i] << std::endl;
    }

    Array<int> assignedArray;
    assignedArray = intArray;
    std::cout << "\nTest 4 - Tableau après affectation :\n";
    for (size_t i = 0; i < assignedArray.size(); i++) {
        std::cout << "assignedArray[" << i << "] = " << assignedArray[i] << std::endl;
    }

    Array<std::string> strArray(3);
    strArray[0] = "Hello";
    strArray[1] = "World";
    strArray[2] = "Array template";

    std::cout << "\nTest 5 - Tableau de chaînes de caractères :\n";
    for (size_t i = 0; i < strArray.size(); i++) {
        std::cout << "strArray[" << i << "] = " << strArray[i] << std::endl;
    }

    return 0;
}
