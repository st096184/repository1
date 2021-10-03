//
//  main.cpp
//  2
//
//  Created by Федор on 03.10.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n = 0;
    int s = 2;
    int i = 1;
    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl;
    }
    while (i < n)
    {
        s = s * 2;
        i = i + 1;
    }
    cout << s << endl;
    return 0;
}
