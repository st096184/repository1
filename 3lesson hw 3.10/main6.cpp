//
//  main.cpp
//  6
//
//  Created by Федор on 03.10.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n = 0;
    int k = 0;
    int a = 0; // число нулей
    int b = 0; // положительные числа
    int c = 0; // отрицательные числа
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        if (k == 0)
        {
            a++;
        }
        else if (k > 0)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    cout << a << b << c << endl;
    return 0;
}
