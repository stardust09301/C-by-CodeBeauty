
// Tutorial_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // User enters side lengths of a triangle (a, b, c)
    // Program should write out whether that triangle is 
    // equilateral, isosceles or scalene
    float a, b, c;
    cout << "a, b, c:";
    cin >> a >> b >> c;

    if (a == b && b == c) // if command is one, brackets can be deleted
        cout << "Equilateral triangle";
    
    else 
        if (a != b && a != c && b != c) 
            cout << "Scalene triangle";
        
        else 
            cout << "Isosceles triangle";

    
    system("pause > 0");
}

