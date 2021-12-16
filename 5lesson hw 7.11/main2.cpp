//
//  main.cpp
//  ex2
//
//  Created by Федор on 16.12.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    double a = 0;
    cin >> a;
    
    unsigned long long* b = (unsigned long long*)&a;
    unsigned long long number = *b;
    
    int size =  sizeof(unsigned long long) * 8;
    unsigned long long one = 1;
    for (int i = 1; i <= size; ++i)
    {
        unsigned long long c = ((number & (one << (size - i))) >> (size - i));
        cout << c;
        if (i % 4 == 0)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
