#include "SinglyLinkedList.hpp"

#include <iostream>

SinglyLinkedList::SinglyLinkedList ()
    : _head(nullptr), _tail(nullptr)
{}

SinglyLinkedList::~SinglyLinkedList ()
{
    for (Node *node; !this->isEmpty();)
    {
        node = _head->_next;
        delete _head;
        _head = node;
    }
}

void SinglyLinkedList::AddToHead (int data)
{
    _head = new Node(data, _head);
    if (_tail == nullptr)
    {
        _tail = _head;
    }
}

void SinglyLinkedList::AddToTail (int data)
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

int SinglyLinkedList::DeleteFromHead ()
{
    if (this->isEmpty()) return -1;

    Node *temp = _head;
    int data = temp->_data;

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

int SinglyLinkedList::DeleteFromTail ()
{
    if (this->isEmpty()) return -1;

    Node *temp = _tail;
    int data = _tail->_data;

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

void SinglyLinkedList::Print () const
{
    Node *node = _head;

    while (node != nullptr)
    {
        std::cout << node->_data << " ";
        node = node->_next;
    }
}
