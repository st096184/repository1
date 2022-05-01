//
//  LinkedList.cpp
//  3hw
//
//  Created by Федор on 01.05.2022.
//

#include "LinkedList.hpp"


std::ostream& operator<<(std::ostream& stream, const Node& node)
{
    stream << node.data;
    return stream;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
    stream << "[" << list.count << "] : { ";
    Node* temp = list.head;
    while (temp != nullptr)
    {
        stream << *temp << " ";
        //stream << temp->data << " ";
        temp = temp->next;
    }
    stream << "}";
    return stream;
}

LinkedList::~LinkedList()
{
    while (head != nullptr)
    {
        popHead();
    }
}

void LinkedList::pushHead(int element)
{
    /*
    Node* newhead = new Node();
    newhead->data = element;
    newhead->next = this->head;
    head = newhead;
    if (tail == nullptr)
    {
        tail = head;
    }
    ++count;*/
    head = new Node(element, head);
    if (tail == nullptr)
    {
        tail = head;
    }
    ++count;
}

void LinkedList::pushTail(int element)
{
    if (tail == nullptr)
    {
        return pushHead(element);
    }
    tail->next = new Node(element);
    tail = tail->next;
    ++count;
}

int LinkedList::popHead()
{
    if (head == nullptr)
    {
        return 0;
    }
    --count;
    Node* temp = head;
    int value = head->data;
    head = head->next;
    delete temp;
    if (head == nullptr)
    {
        tail = nullptr;
    }
    return value;
}

int LinkedList::popTail()
{
    if (tail == nullptr)
    {
        return 0;
    }
    if (head == tail)
    {
        return popHead();
    }
    Node* temp = head;
    while (temp->next != tail)
    {
        temp = temp->next;
    }
    --count;
    int value = tail->data;
    delete tail;
    tail = temp;
    tail->next = nullptr;
    return value;
}

void LinkedList::insert(int element, int index)
{
    if (index == 0)
    {
        void pushHead();
    }
    else
    {
        Node* previous = this->head;
        
        for (int i = 0; i < index - 1; ++i)
        {
            previous = previous->next;
        }
        
        Node* newNode = new Node();
        newNode->data = element;
        newNode->next = previous->next;
        previous->next = newNode;
        ++count;
    }
}

int LinkedList::extract(int index)
{
    if (index == 0)
    {
        popHead();
    }
        Node* previous = this->head;
        
        for (int i = 0; i < index - 1; ++i)
        {
            previous = previous->next;
        }
        --count;
        int value = previous->data;
        Node* toReturn = previous->next;
        previous->next = toReturn->next;
        delete toReturn;
        return value;
}

void LinkedList::swap(int index1, int index2)
{
    if (index1 == 0 && index2 == 1)
    {
        
    }
}


