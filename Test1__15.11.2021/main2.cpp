//
//  main.cpp
//  ex.2
//
//  Created by Федор on 15.11.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a = 0;
    int m = 0;
    int n = 0;
    int i = 0;
    cin >> m >> n;
    while (cin >> a)
    {
        ++i;
        if (i % 2)
        {
            if (a < n)
            {
                a = n;
            }
        }
        else if (a > m)
        {
            a = m;
        }
        cout << m + n << " " << endl;
    }
    return 0;
}
