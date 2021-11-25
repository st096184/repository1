//
//  main.cpp
//  3
//
//  Created by Федор on 25.11.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n = 0;
    int a = 0;
    int b = 0;
    
    cin >> n;
    
    for (int i = 1; i <= n ; ++i)
    for (int j = 1; j <= n ; ++j)
    {
    cin >> a;
    b += a;
    }
    cout << b / 2;
    return 0;
    }

