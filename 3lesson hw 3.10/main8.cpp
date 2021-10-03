//
//  main.cpp
//  8
//
//  Created by Федор on 03.10.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n = 0;
    int i = 1;
    int k = 0;
    int sum = 0;
    cin >> n;
    while (i <= n)
    {
        cin >> k;
        sum = sum + k;
        i = i + 1;
    }
    cout << sum << endl;
    return 0;
}
