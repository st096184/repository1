//
//  main.cpp
//  sem2.hw2.24.04
//
//  Created by Федор on 24.04.2022.
//

#include <iostream>
#include "arraylist.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    ArrayList list (3);
    list[0] = 1;
    list[1] = 4;
    list[2] = 2;
    cout << list << endl;
    cout << list.pushend(2) << endl;
    cout << list.pushbegin(3) << endl;
    cout << list.insert(2, 1) << endl;
    cout << list.extractbegin() << endl;
    cout << list.extractend() << endl;
    cout << list.extract() << endl;
    cout << list.sort() << endl;
}
