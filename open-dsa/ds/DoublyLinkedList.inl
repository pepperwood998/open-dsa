#ifndef DOUBLY_LINKED_LIST_INL
#define DOUBLY_LINKED_LIST_INL

#include <iostream>

template <class T>
DoublyLinkedList<T>::DoublyLinkedList ()
    : _head(nullptr), _tail(nullptr)
{}

template <class T>
DoublyLinkedList<T>::~DoublyLinkedList ()
{
    for (Node *it; _head != nullptr;)
    {
        it = _head->_next;
        delete _head;
        _head = it;
    }
}

template <class T>
void DoublyLinkedList<T>::AddToHead (T data)
{
    _head = new Node(data, nullptr, _head);
    
    if (_tail == nullptr)
    {
        _tail = _head;
    } else
    {
        _head->_next->_prev = _head;
    }
    
}

template <class T>
void DoublyLinkedList<T>::AddToTail (T data)
{
    if (_tail == nullptr)
    {
        _head = _tail = new Node(data);
    } else
    {
        _tail = new Node(data, _tail, nullptr);
        _tail->_prev->_next = _tail;
    }
    
}

template <class T>
void DoublyLinkedList<T>::Print () const
{
    Node *it = _head;

    while (it != nullptr)
    {
        std::cout << it->_data << " ";
        it = it->_next;
    }
}

#endif // DOUBLY_LINKED_LIST_INL
