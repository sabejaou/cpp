#include "iter.hpp"

template <typename T>
void printElement(T& elem) {
	std::cout << elem << " ";
}

template <typename T>
void incrementElement(T& elem) {
	elem += 1;
}

int main() {
	int intArray[] = {1, 2, 3, 4, 5};
	size_t intArraySize = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << "Test 1 - Tableau d'entiers avant incrementation: ";
	iter(intArray, intArraySize, printElement);
	std::cout << std::endl;

	std::cout << "Test 1 - Incrémentation des éléments: ";
	iter(intArray, intArraySize, incrementElement);
	iter(intArray, intArraySize, printElement);
	std::cout << std::endl;

	float floatArray[] = {1.5f, 2.5f, 3.5f, 4.5f};
	size_t floatArraySize = sizeof(floatArray) / sizeof(floatArray[0]);

	std::cout << "\nTest 2 - Tableau de floats avant incrémentation: ";
	iter(floatArray, floatArraySize, printElement);
	std::cout << std::endl;

	std::cout << "Test 2 - Incrémentation des éléments: ";
	iter(floatArray, floatArraySize, incrementElement);
	iter(floatArray, floatArraySize, printElement);
	std::cout << std::endl;

	std::string strArray[] = {"Hello", "World", "Templates", "C++"};
	size_t strArraySize = sizeof(strArray) / sizeof(strArray[0]);

	std::cout << "\nTest 3 - Tableau de chaînes de caractères: ";
	iter(strArray, strArraySize, printElement);
	std::cout << std::endl;

	char charArray[] = {'a', 'b', 'c', 'd', 'e'};
	size_t charArraySize = sizeof(charArray) / sizeof(charArray[0]);

	std::cout << "\nTest 4 - Tableau de caractères avant incrémentation:ssss ";
	iter(charArray, charArraySize, printElement);
	std::cout << std::endl;

	std::cout << "Test 4 - Incrémentation des caractères: ";
	iter(charArray, charArraySize, incrementElement);
	iter(charArray, charArraySize, printElement);
	std::cout << std::endl;

	return 0;
}
