//
//  main.cpp
//  7
//
//  Created by Федор on 03.10.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    cin >> a >> b >> c >> d;
    for (int i=0; i <= 1000; ++i)
    {
        if (a * i * i * i + b * i * i + c * i + d == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
