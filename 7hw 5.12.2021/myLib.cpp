//
//  myLib.cpp
//  7hw
//
//  Created by Федор on 05.12.2021.
//
#include "myLib.hpp"
using namespace std;
int f(int n)
{
    int count = 0;
    while (n>1)
    {
        if (n % 2 == 0)
        {
            ++count;
            n = n / 2;
        }
        else
        {
            ++count;
            n = 3 * n + 1;
        }
    }
    return count;
}

int g(int R)
{
    for (int i = 0; i < 2 * R; ++i)
    {
        for (int j = 0; j < 2 * R; ++j)
        {
            if ( (i - R) * (i - R) + (j - R) * (j - R) == R * R )
            {
               cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
    }
}

