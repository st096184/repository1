//
//  main.cpp
//  1дз по программированию 5
//
//  Created by Федор on 18.09.2021.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a;
    cin >> a;
    cout << a%10 + a/100 + (a%100)/10;
    return 0;
}
