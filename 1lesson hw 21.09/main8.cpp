//
//  main.cpp
//  1дз по программированию 8
//
//  Created by Федор on 19.09.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    int s1 = a * 3600 + b * 60 + c;
    int s2 = d * 3600 + e * 60 + f;
    cout << s2 - s1;
    return 0;
}
