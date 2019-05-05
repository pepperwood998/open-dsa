#include <DoublyLinkedList.hpp>
#include <iostream>

int main()
{
    DoublyLinkedList<float> some_list;
    some_list.AddToTail(6969.0f);
    some_list.AddToHead(23.0f);
    some_list.AddToHead(99.0f);
    some_list.AddToHead(128.0f);
    some_list.DeleteNode(6969.0f);
    some_list.AddToTail(1234.0f);
    some_list.Print();

    std::cout << '\n';
    std::cout << some_list.contain(23.0f) << '\n';
    std::cout << some_list.contain(232.0f) << '\n';

    return 0;
}
