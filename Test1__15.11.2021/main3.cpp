//
//  main.cpp
//  ex.3
//
//  Created by Федор on 15.11.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int aa = a;
    int bb = b;
    cin >> a >> b;
    if (a < b)
    {
        int k = a;
        a = b;
        b = k;
    }
    while(b)
    {
        c = a;
        a = b;
        b = c % b;
    }
    b = (aa * bb) / a;
    cout << b;
    return 0;
}
