//
//  main.cpp
//  1
//
//  Created by Федор on 25.11.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n = 0;
    int a = 540;
    int b = 45;
    int c = 5;
    int d = 15;
    int e = 0;
    
    cin >> n;
    
    e = a + b * n;
    e += (n - 1) * c;
    e += (n - 1) / 2 * (d - c);
    cout << e / 60 << " " << e % 60;
    return 0;
}
