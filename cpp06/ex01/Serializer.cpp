#include "Serializer.hpp"

unsigned long Serializer::serialize(Data* ptr) {
	return reinterpret_cast<unsigned long>(ptr);
}

Data* Serializer::deserialize(unsigned long raw) {
	return reinterpret_cast<Data*>(raw);
}

Serializer::~Serializer() {}
Serializer::Serializer() {}
Serializer::Serializer(const Serializer&) {}
Serializer& Serializer::operator=(const Serializer&) {
	return *this;
}

