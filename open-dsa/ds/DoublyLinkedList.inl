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
T DoublyLinkedList<T>::DeleteFromHead ()
{
    if (this->isEmpty()) return T();

    Node *temp = _head;
    T data = temp->_data;

    if (_head == _tail)
    {
        _head = _tail = nullptr;
    } else
    {
        _head = _head->_next;
        _head->_prev = nullptr;
    }
    
    delete temp;
    return data;
}

template <class T>
T DoublyLinkedList<T>::DeleteFromTail ()
{
    if (this->isEmpty()) return T();

    Node *temp = _tail;
    T data = temp->_data;

    if (_head == _tail)
    {
        _head = _tail = nullptr;
    } else
    {
        _tail = _tail->_prev;
        _tail->_next = nullptr;
    }
    
    delete temp;
    return data;
}

template <class T>
void DoublyLinkedList<T>::DeleteNode (T data)
{
    if (this->isEmpty()) return;

    if (data == _head->_data)
    {
        this->DeleteFromHead();
    } else
    {
        Node *it = _head;

        while (it != nullptr && data != it->_data)
        {
            it = it->_next;
        }

        if (it != nullptr)
        {
            it->_prev->_next = it->_next;
            if (it == _tail) _tail = it->_prev;

            delete it;
        }
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
