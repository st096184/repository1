//
//  main.cpp
//  1дз по программированию 9
//
//  Created by Федор on 19.09.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int a = 0;
    cin >> a;
    int x = a * a;
    cout << x * (x + a + 1) + a + 1;
    return 0;
}
