//
//  main.cpp
//  дз2.9
//
//  Created by Федор on 26.09.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int m = 0;
    int n = 0;
    int x = 0;
    int y = 0;
    cin >> m >> n >> x >> y;
    if (x - 1 > 0)
    {
        cout << x - 1 << " " << y;
    }
    if (x + 1 < m)
    {
        cout << x + 1 << " " << y;
    }
    if (y - 1 > 0)
    {
        cout << x << " " << y - 1;
    }
    if (x + 1 < n)
    {
        cout << x << " " << y + 1;
    }
    return 0;
}
