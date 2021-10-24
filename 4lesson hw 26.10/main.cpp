//
//  main.cpp
//  4lesson hw 26.10
//
//  Created by Федор on 24.10.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int k = 0;
    cin >> k;
    const int N = k;
    int a[N];
    for ( int i = 0; i < N; ++i) //ex 1-2
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; ++i) // ex 3
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < N; ++i) // ex 4
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
    int SUM = 0; // ex 5
    for (int i = 0; i < N; ++i)
    {
        SUM += a[i];
    }
    cout << SUM;
    int productnegative = 1; // ex 6
    for (int i = 0; i < N; ++i)
    {
        if (a[i] < 0)
        {
            productnegative = a[i] * productnegative;
        }
    }
    cout << productnegative; // ex 9
    for (int i = N - 1; i >= 0; --i)
    {
        cout << a[i] << " ";
    }
    for (int i = 1; i < N; i +=2) // ex 10
    {
        cout << a[i] << " ";
    }
    int q = a[0];
    for (int i = 1; i < N; ++i)
    {
        if (q > a[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}
