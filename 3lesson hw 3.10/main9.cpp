//
//  main.cpp
//  9
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
    int n = 0;
    int i = a;
    cin >> a >> b >> c >> d;
    while (i <= b)
    {
        cin >> n;
        if (i % d == c)
        {
            cout << i << endl;
        }
        i = i + 1;
    }
    return 0;
}
