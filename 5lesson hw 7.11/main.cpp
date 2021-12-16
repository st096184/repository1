//
//  main.cpp
//  ex.1
//
//  Created by Федор on 07.11.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a >> b >> c;
    int bitb = (a & (1 << b)) >> b;
    a = a & (~(1 << b));
    int bitc = (a & (1 << c)) >> c;
    a = a & (~(1 << c));
    a = a | (bitb << c) | (bitc << b);
    cout << a;
    return 0;
}
