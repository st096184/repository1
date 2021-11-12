//
//  main.cpp
//  program
//
//  Created by Федор on 12.11.2021.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <clocale>
#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    setlocale(LC_ALL, "Russian");
    bool exiting = false;
    int capacity = 10;
    int count = 0;
    int i = 0;
    int *a = new int[capacity] {0};
    for (i = 0; i < capacity; ++i)
    {
        a[i] = rand() % 10;
    }
    
    delete[] a;
    
    while (!exiting)
    {
        system("cls");
        printf("_______MENU_______\n");
        printf("0. Выход из программы.\n");
        printf("1. Вывод текущего состояния массива.\n");
        printf("2. Добавить элемент в конец массива.\n");
        printf("3. Добавить элемент в начало массива.\n");
        printf("4. Удалить элемент из конца массива.\n");
        printf("5. Удалить элемент из начала массива.\n");
        printf("6. Развернуть массив.\n");
        printf("Сделайте свой выбор : ");
        
        char c = 0;
        cin >> c;
        
        switch (c)
        {
            case 48: //0
                exiting = true;
                break;
            case 49: //1
                cout << a[i];
                break;
            case 50: //2
                int b = 0; //последний элемент массива
                cin >> b;
                int *a1 = new int[capacity+1];
                for (i = 0; i < capacity; ++i)
                {
                    a1[i] =a [i];
                }
                a1[capacity] = b;
                delete[] a;
                for (i = 0; i < capacity + 1; ++i)
                {
                    cout << a1[i];
                }
                delete[] a1;
                break;
            case 51: //3
                int d = 0; //первый элемент
                cin >> d;
                int *a2 = new int[capacity+1];
                a2[0] = d;
                for (i = 0; i < capacity; ++i)
                {
                    a2[i + 1] =a [i];
                }
                delete[] a;
                for (i = 0; i < capacity + 1; ++i)
                {
                    cout << a2[i];
                }
                delete[] a2;
                break;
            case 52: //4
                int n = 0;
                n = capacity - 1;
                int *a3 = new int[n];
                for (i = 0; i < capacity; ++i)
                {
                    a3[i] = a[i];
                }
                delete[] a;
                for (i = 0; i < capacity + 1; ++i)
                {
                    cout << a3[i];
                }
                delete[] a3;
                break;
        }
    }
    return 0;
}
