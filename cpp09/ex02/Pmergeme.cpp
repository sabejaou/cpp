#include "Pmergeme.hpp"
#include <iostream>
void merge(Array &array, int begin, int middle, int len)
{
    int value;
    int i;
    int pos;
    while (middle < len)
    {
        value = array[begin + middle];
        for (pos = 0; pos < middle && array[begin + pos] < value; pos++);
        for (i = begin + middle; i > begin + pos; i--){
            array[i] = array[i - 1];
        }
        array[begin + pos] = value;
        middle++;
    }
}

void    sort(Array &array, int begin, int len)
{
    int middle = len / 2;
    std::cout << "[ ";
    for (int i = 0; i < len; i++)
        std::cout << array[begin + i] << " ";
    std::cout << "]" << std::endl;
    if (len > 2)
    {
        sort(array, begin, middle);
        sort(array, begin + middle, len - middle);
        merge(array, begin, middle, len);
    }
    else if (len == 2 && array[begin] > array[begin + 1])
    {
        swap(array[begin], array[begin + 1]);
    }
}

void    pmerge(Array &array)
{
    sort(array, 0, array.size());
}
