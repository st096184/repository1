//
//  main.cpp
//  1дз по программированию 4
//
//  Created by Федор on 18.09.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int v = 0;
    int t = 0;
    cin >> v >> t;
    cout << (109 + v * t % 109) % 109;
    return 0;
}
