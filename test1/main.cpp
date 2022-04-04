//
//  main.cpp
//  test1
//
//  Created by Федор on 04.04.2022.
//

#include <iostream>
#include "Rational.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    Fraction fr1(3, 1);
    Fraction fr2(5, -2);
    cout << fr1 * fr2 << endl;
    cout << fr1 / fr2 << endl;
    cout << 1 / (3 * fr1 + 4 * fr2) << endl;
    cout << fr1.reverse() << endl; //обратное число
    return 0;
}
