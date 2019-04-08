#ifndef SINGLY_LINKED_LIST
#define SINGLY_LINKED_LIST

template <class T>
class SinglyLinkedList
{
private:
    class Node
    {
    public:
        T _data;
        Node *_next;

        Node (T data = 0, Node *next = nullptr)
            : _data(data), _next(next)
        {}
    };

    Node *_head;
    Node *_tail;

public:
    SinglyLinkedList ();
    ~SinglyLinkedList ();

    void AddToHead (T data);
    void AddToTail (T data);
    T DeleteFromHead ();
    T DeleteFromTail ();
    void DeleteNode (T data);

    bool isEmpty () const { return _head == nullptr; }
    void Print () const;
};

#include "SinglyLinkedList.inl"

#endif // SINGLY_LINKED_LIST
