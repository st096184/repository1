//
//  main.cpp
//  ex.3
//
//  Created by Федор on 07.11.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
              // Вывести абсолютную величину введенного числа.
    int n = 0;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        cout << ~n + 1 << endl;
    }
    return 0;
}
