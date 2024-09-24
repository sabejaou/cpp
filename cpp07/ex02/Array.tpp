#include "Array.hpp"
#include <stdexcept>

template <typename T>
Array<T>::Array() : elements(NULL), _size(0){}

template <typename T>
Array<T>::Array(int n) : _size(n){
	this->elements = new T[n];
}

template <typename T>
Array<T>::Array(const Array<T>& cpy) : _size(cpy._size) {
    elements = new T[_size];
    for (size_t i = 0; i < _size; ++i) {
        elements[i] = cpy.elements[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    if (this != &other) {
        delete[] elements;
        _size = other._size;
        elements = new T[_size];
        for (size_t i = 0; i < _size; ++i) {
            elements[i] = other.elements[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] elements;
}

template <typename T>
size_t Array<T>::size() const {
    return _size;
}

template <typename T>
T& Array<T>::operator[](size_t index) {
    if (index >= _size) {
        throw std::out_of_range("Index out of range");
    }
    return elements[index];
}

template <typename T>
const T& Array<T>::operator[](size_t index) const {
    if (index >= _size) {
        throw std::out_of_range("Index out of range");
    }
    return elements[index];
}