//
//  main.cpp
//  1hw_2sem
//
//  Created by Федор on 03.04.2022.
//

#include <iostream>
#include "Complex.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    Complex z1(3, 1);
    Complex z2(5, -2);
    
    cout << z1 * z2 << endl;
    cout << z1 / z2 << endl;
    cout << 3 * z1 + 4 * z2 << endl;
    cout << ComplexReverse(z1);
    cout << arg(z1);
    cout << abs(z1);
    return 0;
}
