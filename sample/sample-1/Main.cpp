#include <SinglyLinkedList.hpp>
#include <iostream>

int main ()
{
    SinglyLinkedList<int> list;
    list.AddToTail(99);
    list.AddToHead(3);
    list.AddToTail(12);
    list.AddToHead(10);
    list.Print();
    std::cout << list.contain(9) << std::endl;
    std::cout << list.contain(99) << std::endl;

    return 0;
}
