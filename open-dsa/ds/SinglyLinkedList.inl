#ifndef SINGLY_LINKED_LIST_INL
#define SINGLY_LINKED_LIST_INL

#include <iostream>

template <class T>
SinglyLinkedList<T>::SinglyLinkedList ()
    : _head(nullptr), _tail(nullptr)
{}

template <class T>
SinglyLinkedList<T>::~SinglyLinkedList ()
{
    for (Node *node; !this->isEmpty();)
    {
        node = _head->_next;
        delete _head;
        _head = node;
    }
}

template <class T>
void SinglyLinkedList<T>::AddToHead (T data)
{
    _head = new Node(data, _head);
    if (_tail == nullptr)
    {
        _tail = _head;
    }
}

template <class T>
void SinglyLinkedList<T>::AddToTail (T data)
{
    Node *node = new Node(data);
    if (this->isEmpty())
    {
        _head = node;
    } else
    {
        _tail->_next = node;
    }

    _tail = node;
}

template <class T>
T SinglyLinkedList<T>::DeleteFromHead ()
{
    if (this->isEmpty()) return -1;

    Node *temp = _head;
    T data = temp->_data;

    // check if there is only 1 node
    if (_head == _tail)
    {
        _head = _tail = nullptr;
    } else
    {
        _head = _head->_next;
    }

    delete temp;
    return data;
}

template <class T>
T SinglyLinkedList<T>::DeleteFromTail ()
{
    if (this->isEmpty()) return -1;

    Node *temp = _tail;
    T data = _tail->_data;

    // check if there is only 1 node
    if (_head == _tail)
    {
        _head = _tail = nullptr;
    } else
    {
        Node *it = _head;
        while (it->_next != _tail)
        {
            it = it->_next;
        }
        
        _tail = it;
        it->_next = nullptr;
    }
    
    delete temp;
    return data;
}

template <class T>
void SinglyLinkedList<T>::DeleteNode (T data)
{
    if (this->isEmpty()) return;

    if (data == _head->_data)
    {
        if (_head == _tail)
        {
            delete _head;
            _head = _tail = nullptr;
        } else
        {
            Node *temp = _head;
            _head = _head->_next;
            delete temp;
        }
    } else
    {
        Node *prev = _head;
        Node *it = _head->_next;
        while (it != nullptr && data != it->_data)
        {
            prev = prev->_next;
            it = it->_next;
        }

        if (it != nullptr)
        {
            prev->_next = it->_next;
            if (it == _tail) _tail = prev;

            delete it;
        }
    }
}

template <class T>
bool SinglyLinkedList<T>::contain(T data) const
{
    Node *it = _head;
    while (it != nullptr && data != it->_data)
    {
        it = it->_next;
    }

    return it != nullptr;
}

template <class T>
void SinglyLinkedList<T>::Print () const
{
    Node *node = _head;

    while (node != nullptr)
    {
        std::cout << node->_data << " ";
        node = node->_next;
    }
}

#endif // SINGLY_LINKED_LIST_INL
