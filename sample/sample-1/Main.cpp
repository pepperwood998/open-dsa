#include <SinglyLinkedList.hpp>

int main ()
{
    SinglyLinkedList list;
    list.AddToTail(99);
    list.AddToHead(3);
    list.AddToTail(12);
    list.AddToHead(10);
    list.Print();

    return 0;
}
