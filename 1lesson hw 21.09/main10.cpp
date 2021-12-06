//
//  main.cpp
//  10
//
//  Created by Федор on 06.12.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int a = 0;
    int b = 0;
    cin >> a >> b;
    cout << (a / b * a + b / a * b) / (a % b + b % a);
    return 0;
}
