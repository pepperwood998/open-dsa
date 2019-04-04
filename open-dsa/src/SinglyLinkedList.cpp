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

void SinglyLinkedList::Print () const
{
    Node *node = _head;

    while (node != nullptr)
    {
        std::cout << node->_data << " ";
        node = node->_next;
    }
}
