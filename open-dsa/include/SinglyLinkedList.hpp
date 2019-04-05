#ifndef SINGLY_LINKED_LIST
#define SINGLY_LINKED_LIST

class SinglyLinkedList
{
private:
    class Node
    {
    public:
        int _data;
        Node *_next;

        Node (int data = 0, Node *next = nullptr)
            : _data(data), _next(next)
        {}
    };

    Node *_head;
    Node *_tail;

public:
    SinglyLinkedList ();
    ~SinglyLinkedList ();

    bool isEmpty () { return _head == nullptr; }
    void AddToHead (int data);
    void AddToTail (int data);
    int DeleteFromHead ();
    int DeleteFromTail ();
    void DeleteNode (int);

    void Print () const;
};

#endif // SINGLY_LINKED_LIST
