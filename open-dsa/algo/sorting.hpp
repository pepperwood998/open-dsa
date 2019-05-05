#include <cstddef>
#include <iostream>

template<class T>
void PrintArr(T data[], std::size_t n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << data[i] << ' ';
    }
}

namespace basic
{
// the basic idea is to insert an element
// to a sorted list, making a new sorted list
template <class T>
void InsertionSort(T data[], std::size_t n)
{
    for (int i = 1; i < n; ++i)
    {
        T tmp = data[i];
        int j;
        
        for (j = i; j > 0 && tmp < data[j - 1]; --j)
        {
            data[j] = data[j - 1];
        }

        data[j] = tmp;
    }
}
} // namespace basic
