//
//  main.cpp
//  3hw
//
//  Created by Федор on 01.05.2022.
//

#include<iostream>
#include"LinkedList.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    LinkedList list;
    cout << list << endl;
    list.pushHead(0);
    list.pushTail(1);
    list.pushTail(2);
    list.pushHead(-1);
    list.pushHead(-2);
    cout << list << endl;
    cout << "poped : " << list.popHead() << endl;
    cout << "poped : " << list.popHead() << endl;
    cout << "poped : " << list.popTail() << endl;
    cout << "poped : " << list.popTail() << endl;
    cout << list << endl;
    list.insert(1, 1);
    cout << list << endl;
    list.insert(2, 2);
    cout << list << endl;
    list.extract(2);
    cout << list << endl;
    return EXIT_SUCCESS;
}
