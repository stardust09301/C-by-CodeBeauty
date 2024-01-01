// Multiplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Multiplicatio Table

#include <iostream>
using namespace std;

void main()
{
    for (int i = 1; i <= 20; i++) { //i<=10, value can be changed
        for (int j = 1; j <= 20; j++) { //j<=10
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    system("pause>0");
}

