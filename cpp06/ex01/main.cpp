#include "Serializer.hpp"
#include <iostream>

int main() {
	Data originalData;
	originalData.name = "John Doe";
	originalData.age = 30;

	unsigned long serialized = Serializer::serialize(&originalData);

	Data* deserializedData = Serializer::deserialize(serialized);

	std::cout << "Original Data pointer: " << &originalData << std::endl;
	std::cout << "Serialized value: " << serialized << std::endl; // Print the serialized value
	std::cout << "Deserialized Data pointer: " << deserializedData << std::endl;

	std::cout << "Deserialized Data content:" << std::endl;
	std::cout << "Name: " << deserializedData->name << std::endl;
	std::cout << "Age: " << deserializedData->age << std::endl;

	return 0;
}
