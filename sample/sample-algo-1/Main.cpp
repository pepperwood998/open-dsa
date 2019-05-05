#include <algo/sorting.hpp>
#include <cstddef>

int main()
{
    int data[] = {5, 2, 3, 8, 1};
    std::size_t n = 5;

    PrintArr<int>(data, n);

    std::cout << '\n';
    basic::InsertionSort(data, n);
    PrintArr<int>(data, n);

    return 0;
}
