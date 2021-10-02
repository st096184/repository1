//
//  main.cpp
//  дз2.3
//
//  Created by Федор on 26.09.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n = 0;
    int k = 0;
    int m = 0;
    cin >> n >> m >> k;
    if (n <= k)
    {
        cout << 2*m;
    }
    else if ( n%k == 0)
    {
          cout << m*(2*n/k);
    }
       else
    {
            cout << 2*m*((n/k) + 1);
    }
    return 0;
}
