//
//  arraylist.hpp
//  sem2.hw2.24.04
//
//  Created by Федор on 24.04.2022.
//

#ifndef arraylist_hpp
#define arraylist_hpp

#include <stdio.h>
#include<ostream>

using namespace std;

class ArrayList
{
private:
    int* data;
    int capacity;
    int count;
    void expand(int count = 1);
    void swap(int posi, int posj);//меняет местами два элемента массива
    int ind(int index);

public:
    ArrayList(int capacity = 10);
    ArrayList(const ArrayList& list);
    ~ArrayList();

    
    void pushend(int element);
    void pushbegin(int element);
    void insert(int element, int position);
    int extractbegin();
    int extractend();
    int extract(int position);
    void sort();
   
    int& operator[](int pos);
    
    

    friend std::ostream& operator<<(std::ostream& stream, ArrayList& list);
};


#endif /* arraylist_hpp */
