//
//  main.cpp
//  5
//
//  Created by Федор on 25.11.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a[1000]{ 0 };
    int n = 0;
    int s = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    
    if (a[1] > a[n-2])
    {
        s = a[0] + a[n-1] + a[1];
    }
    else
    {
        s = a[0] + a[n-1] + a[n-2];
    }
    
    for (int i = 1; i < n; ++i)
    {
        if (a[i-1] + a[i] + a[i+1] > s)
        {
            s = a[i-1] + a[i] + a[i+1];
        }
    }
    cout << s;
    return 0;
}
