#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>  // Pour size_t

template <typename T>
class Array {
public:
    Array();
    Array(int n);
    Array(const Array &cpy);

    Array<T>& operator=(const Array<T>& other);

    ~Array();


    size_t size() const;
    T& operator[](size_t index);
    const T& operator[](size_t index) const;

private:
    T* elements;
    size_t _size;
};

#include "Array.tpp"

#endif
