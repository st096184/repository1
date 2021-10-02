//
//  main.cpp
//  дз2.8
//
//  Created by Федор on 26.09.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a >> b >> c;
    int k = (a*a + b*b - c*c)/2*a*b;
    if (k == 0)
    {
        cout << "right";
    }
    else if (k > 0 && k < 1)
    {
        cout << "acute";
    }
    else if (k < 0 && k > -1)
    {
        cout << "obtuse";
    }
    else
    {
        cout << "impossible";
    }
    return 0;
}
