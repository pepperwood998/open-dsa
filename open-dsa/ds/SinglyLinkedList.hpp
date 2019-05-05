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

        Node(const T &data = 0, Node *next = nullptr)
            : _data(data), _next(next)
        {
        }
    };

    Node *_head;
    Node *_tail;

public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    void AddToHead(const T &data);
    void AddToTail(const T &data);
    T DeleteFromHead();
    T DeleteFromTail();
    void DeleteNode(const T &data);

    bool contain(const T &data) const;
    bool isEmpty() const { return _head == nullptr; }
    void Print() const;
};

#include "SinglyLinkedList.inl"

#endif // SINGLY_LINKED_LIST
