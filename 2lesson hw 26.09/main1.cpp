//
//  main.cpp
//  дз2.1
//
//  Created by Федор on 26.09.2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n = 0;
    cin >> n;
    switch (n/100)
    {
        case 1: cout << "cто бананов"; break;
        case 2: cout << "двести бананов"; break;
        case 3: cout << "триста бананов"; break;
        case 4: cout << "четыреста бананов"; break;
        case 5: cout << "пятьсот бананов"; break;
        case 6: cout << "шестьсот бананов"; break;
        case 7: cout << "семьсот бананов"; break;
        case 8: cout << "восемьсот бананов"; break;
        case 9: cout << "девятьсот бананов"; break;
    }
    switch ((n%100)/10)
    {
        case 1: cout << "десять бананов"; break;
        case 2: cout << "двадцать бананов"; break;
        case 3: cout << "тридцать бананов"; break;
        case 4: cout << "сорок бананов"; break;
        case 5: cout << "пятьдесят бананов"; break;
        case 6: cout << "шестьдесят бананов"; break;
        case 7: cout << "семьдесят бананов"; break;
        case 8: cout << "восемьдесят бананов"; break;
        case 9: cout << "девяносто бананов"; break;
    }
    switch (n%100)
    {
        case 11: cout << "одиннадцать бананов"; break;
        case 12: cout << "двенадцать бананов"; break;
        case 13: cout << "тринадцать бананов"; break;
        case 14: cout << "четырнадцать бананов"; break;
        case 15: cout << "пятнадцать бананов"; break;
        case 16: cout << "шестнадцать бананов"; break;
        case 17: cout << "семьнадцать бананов"; break;
        case 18: cout << "восемьнадцать бананов"; break;
        case 19: cout << "девятнадцать бананов"; break;
    }
    switch (n%10)
    {
        case 1: cout << "один банан"; break;
        case 2: cout << "два банана"; break;
        case 3: cout << "три банана"; break;
        case 4: cout << "четыре банана"; break;
        case 5: cout << "пять бананов"; break;
        case 6: cout << "шесть бананов"; break;
        case 7: cout << "cемь бананов"; break;
        case 8: cout << "восемь бананов"; break;
        case 9: cout << "девять бананов"; break;
    }
    return 0;
}
