//
//  main.cpp
//  1дз по программированию 7
//
//  Created by Федор on 19.09.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a = 0;
    int b = 0;
    cin >> a >> b;
    int t = a;
    a = b;
    b = t;
    cout << a << b;
    return 0;
}
