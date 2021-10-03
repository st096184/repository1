//
//  main.cpp
//  5
//
//  Created by Федор on 03.10.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n = 0;
    int i = 1;
    int k = 0;
    cin >> n;
    while ( i <= n)
    {
        cin >> k;
        if (n % k == 0)
        {
            cout << k << endl;
        }
        i = i + 1;
    }
    return 0;
}
