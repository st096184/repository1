//
//  main.cpp
//  hw 4
//
//  Created by Федор on 22.11.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a[100]{ 0 };
    
    int n = 0;
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
    
    int SUM = 0;
    for (int i = 0; i < n; ++i)
    {
        SUM += a[i];
    }
    cout << SUM;
    
    int productnegative = 1;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] < 0)
        {
            productnegative *= a[i];
        }
    }
    cout << productnegative;
    
    int firstMinIndex = 0;
    for (int i = 0; i < n; ++i)
    {
       if (a[i] < a[firstMinIndex])
       {
           firstMinIndex = i;
       }
    }
    
    int firstMax = a[0];
    int secondMax = a[1];
    if (firstMax < secondMax)
    {
        int c = firstMax;
        firstMax = secondMax;
        secondMax = c;
    }
    for (int i = 0; i < n; ++i)
    {
        if (firstMax < a[i])
        {
            secondMax = firstMax;
            firstMax = a[i];
        }
        else
        {
            if (secondMax < a[i])
            {
                secondMax = a[i];
            }
        }
    }
    cout << secondMax;
    
    for (int i = 0; i < n; ++i)
    {
        cout << a[n - 1 - i] << " ";
    }
    
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            cout << a[i];
        }
    }
    return 0;
}
