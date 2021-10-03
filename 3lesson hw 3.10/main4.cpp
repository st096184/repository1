//
//  main.cpp
//  4
//
//  Created by Федор on 03.10.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int i = 1;
    int n = 0;
    int factN = 1;
    int k = 0;
    int factK = 1;
    int s = n - k;
    int factS = 1;
    cin >> n >> k;
    while (i <= n)
    {
        factN = factN * i;
        i = i + 1;
    }
    while (i <= k)
    {
        factK = factK * i;
        i = i + 1;
    }
    while (s <= n)
    {
        factS = factS * i;
        i = i + 1;
    }
    cout << factN / factK * factS << endl;
    return 0;
}
