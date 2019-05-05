#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

template <class T>
class DoublyLinkedList
{
private:
    class Node
    {
    public:
        T _data;
        Node *_prev;
        Node *_next;

        Node (T data, Node *prev = nullptr, Node *next = nullptr)
            : _data(data), _prev(prev), _next(next)
        {}
    };

    Node *_head;
    Node *_tail;

public:
    DoublyLinkedList ();
    ~DoublyLinkedList ();

    void AddToHead (T data);
    void AddToTail (T data);
    T DeleteFromHead ();
    T DeleteFromTail ();
    void DeleteNode (T data);

    bool contain (const T &data) const;
    bool isEmpty () const { return _head == nullptr; }
    void Print () const;
};

#include "DoublyLinkedList.inl"

#endif // DOUBLY_LINKED_LIST
