//
//  main.cpp
//  1
//
//  Created by Федор on 03.10.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int i = 1;
    int f = 1;
    int n = 0;
    cin >> n;
    while (i <= n)
    {
        f = f * i;
        i = i + 1;
    }
    cout << f << endl;
    return 0;
}
