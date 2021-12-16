//
//  main.cpp
//  дз2.5
//
//  Created by Федор on 26.09.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int k = 0;
    cin >> k;
    if (k % 4 == 0 || k == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
