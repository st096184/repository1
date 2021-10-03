//
//  main.cpp
//  10
//
//  Created by Федор on 03.10.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a = 0;
    int b = 0;
    int i = a;
    int k = 0;
    cin >> a >> b;
    while (i <= b)
    {
        cin >> k;
        if (k * k == i)
        {
            cout << i << endl;
        }
        i = i + 1;
    }
    return 0;
}
