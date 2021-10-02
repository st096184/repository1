//
//  main.cpp
//  дз2.6
//
//  Created by Федор on 26.09.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    cin >> x1 >> x2 >> y1 >> y2;
    int dx = x1 - x2; //расстояние по х
    int dy = y1 - y2; //расстояние по у
    if (dx < 0)
    {
        dx = -dx;
    }
    if (dy < 0)
    {
        dy = -dy;
    }
    if (x1 == x2 || y1 == y2 || dx == dy)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
