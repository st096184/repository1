//
//  arraylist.cpp
//  sem2.hw2.24.04
//
//  Created by Федор on 24.04.2022.
//

#include "arraylist.hpp"

void ArrayList::expand(int count)
{
    int* newdata = new int[count + this->capacity];
    for (int i = 0; i < this->capacity; ++i)
    {
        newdata[i] = this->data[i];
    }
    delete[] this->data;
    this->data = newdata;
    this->capacity += count;
}

void ArrayList::swap(int posi, int posj)
{
    int a = 0;
    this->data[posi] = a;
    this->data[posi] = this->data[posj];
    this->data[posj] = a;
}

int ArrayList::ind(int index)
{
    if (index < 0)
    {
        pushbegin(0);
        return 0;
    }
    if (index >= this->count)
    {
        pushend(0);
        return this->count - 1;
    }
    return index;
}

ArrayList::ArrayList(int capacity)
{
    this->capacity = capacity;
    this->count = 0;
    this->data = new int[capacity];
}

ArrayList::ArrayList(const ArrayList& list)
{
    this->capacity = list.count;
    this->count = list.count;
    this->data = new int[list.count];
    for (int i = 0; i < list.count; ++i)
    {
        this->data[i] = list.data[i];
    }
}

ArrayList::~ArrayList()
{
    this->count = 0;
    this->capacity = 0;
    for (int i = 0; i < this->capacity; ++i)
    {
        this->data[i] = 0;
    }
    delete[] this->data;
}

void ArrayList::pushend(int element)
{
    if (this->count == this->capacity)
    {
        expand(this->capacity);
    }
    this->data[this->count] = element;
    this->count++;
}

void ArrayList::pushbegin(int element)
{
    if (this->count == this->capacity)
    {
        expand(this->capacity);
    }
    this->data[0] = element;
    this->count++;
}

int ArrayList::extractend()
{
    this->count--;
    return this->data[this->count];
}

int ArrayList::extractbegin()
{
    this->count--;
    return this->data[0];
}

int ArrayList::extract(int position)
{
    if (position >= this->count)
        {
            pushbegin(0);
            return this->count - 1;
        }
    this->count--;
    return this->data[position];
}


int& ArrayList::operator[](int pos)
{
    return data[ind(pos)];
}

void ArrayList::sort()
{
    int i = 0;
    int j = this->count - 1;
    int mid = this->data[this->count / 2];
    do {
        while (this->data[i] < mid)
        {
            i++;
        }
        while (this->data[j] > mid)
        {
            j--;
        }
        if (i <= j)
        {
            int t = this->data[i];
            this->data[i] = this->data[j];
            this->data[j] = t;
            i++;
            j--;
        }
    }
    while (i <= j);
        if (j > 0)
        {
            sort();
        }
        if (i < this->count)
        {
            sort();
        }
}


std::ostream& operator<<(std::ostream& stream, ArrayList& list)
{
    stream << "[" << list.count << "/" << list.capacity << "] {";
    if (list.count == 0)
    {
        stream << "EMPTY";
    }
    else
    {
        for (int i = 0; i < list.count - 1; ++i)
        {
            stream << list.data[i] << ", ";
        }
        stream << list.data[list.count - 1];
    }
    stream << "}";
    return stream;
}
