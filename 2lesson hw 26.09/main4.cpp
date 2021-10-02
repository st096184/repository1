//
//  main.cpp
//  дз2.4
//
//  Created by Федор on 26.09.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    cin >> a >> b >> c >> d;
    if (a == 0 && b == 0)
    {
        cout << "INF";
    }
    else if (a == 0 || b%a != 0 || c*(-b/a) + d == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << -b/a;
    }
    return 0;
}
