#include <DoublyLinkedList.hpp>

int main ()
{
    DoublyLinkedList<float> some_list;
    some_list.AddToTail(6969.0f);
    some_list.AddToHead(23.0f);
    some_list.AddToHead(99.0f);
    some_list.AddToHead(128.0f);
    some_list.AddToTail(1234.0f);
    some_list.Print();

    return 0;
}
