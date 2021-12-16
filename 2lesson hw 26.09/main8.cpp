//
//  main.cpp
//  ex2.2.8
//
//  Created by Федор on 22.11.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a >> b >> c;
    if (a < b)
    {
        int t = a;
        a = b;
        b = t;
    }
    if (a < c)
    {
        int t = a;
        a = c;
        c = t;
    }
    if (b < c)
    {
        int t = b;
        c = b;
        b = t;
    }
    if (a * a > b * b + c * c)
    {
        cout << "obtuse";
    }
    else
    {
        if (a * a < b * b + c * c)
        {
            cout << "accute";
        }
        else
        {
            cout << "right";
        }
    }
    return 0;
}
