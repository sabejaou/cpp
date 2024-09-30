#ifndef P_MERGE_ME_HPP
#define P_MERGE_ME_HPP
#include <vector>

typedef std::vector<unsigned long> Array;

template <typename T>
void swap(T &a, T &b)
{
    T const c(a);
    a = b;
    b = c;
}

void    pmerge(Array &array);

#endif