//
//  main.cpp
//  ex.4
//
//  Created by Федор on 15.11.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int k = 0;
    int min = 0;
    int max = 0;
    cin >> k;
    const int N = k;
    int a[N] = {0};
    for (int i = 0; i < N; ++i)
    {
        a[i] = (rand() % 5) + 1;
    }
       for (int i = 0; i < N; ++i)
    {
        if (a[i] < min)
        {
           min = a[i];
        }
    }
        for (int i = 0; i <N; ++i)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    int t = min;
        for (int i = 0; i < N; ++i)
    {
        if (a[i] == max)
        {
             a[i] = t;
        }
        cout << a[i];
    }

    return 0;
}
