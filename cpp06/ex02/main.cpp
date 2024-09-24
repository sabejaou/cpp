#include "Identify.hpp"
#include <iostream>
#include <ctime>

int main() {
	srand(static_cast<unsigned int>(time(0)));

	const int testCases = 5;
	Base* basePtrs[testCases];

	std::cout << "==== Testing with pointer identification ====" << std::endl;

	for (int i = 0; i < testCases; ++i) {
		basePtrs[i] = generate();
		std::cout << "Test case " << i + 1 << ": ";
		identify(basePtrs[i]);
	}

	std::cout << "\n==== Testing with reference identification ====" << std::endl;

	for (int i = 0; i < testCases; ++i) {
		std::cout << "Test case " << i + 1 << ": ";
		identify(*basePtrs[i]);
	}

	for (int i = 0; i < testCases; ++i) {
		delete basePtrs[i];
	}

	std::cout << "\n==== Testing with nullptr ====" << std::endl;
	Base* nullPtr = NULL;
	identify(nullPtr);

	return 0;
}
