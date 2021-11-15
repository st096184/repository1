//
//  main.cpp
//  ex.1
//
//  Created by Федор on 15.11.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int k = 0;
    int d = 0;
    cin >> k;
    cout << endl;
    int m = 0;
    int n = 0;
    for (int i = 0; i < k; ++i)
    {
        cin >> n >> m;
        cout << endl;
        d = 19*m + (n + 239)*(n + 366) / 2;
        cout << d;
    }
    return 0;
}
