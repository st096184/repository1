//
//  main.cpp
//  2
//
//  Created by Федор on 25.11.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    
    cin >> x1 >> y1 >> x2 >> y2;

    if ((x1 + y1) % 2 == (x2 + y2) % 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
