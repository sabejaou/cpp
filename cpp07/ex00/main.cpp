#include "whatever.hpp"

int main() {
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string str1 = "chaine1";
	std::string str2 = "chaine2";

	::swap(str1, str2);
	std::cout << "str1 = " << str1 << ", str2 = " << str2 << std::endl;

	std::cout << "min(str1, str2) = " << ::min(str1, str2) << std::endl;
	std::cout << "max(str1, str2) = " << ::max(str1, str2) << std::endl;

	return 0;
}
