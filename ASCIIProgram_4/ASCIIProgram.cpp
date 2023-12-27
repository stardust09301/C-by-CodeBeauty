// ASCIIProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //ASCII represents each character with numbers
    cout << (int)'a' << endl; // casting operator
    cout << int('a') << endl;  // same way as the above
    cout << int('A') << endl;
    //Numeric value can represent alphabet characters
    cout << char(65) << endl;

    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: " << int(c1) << " " << int(c2)
        << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;

    int i1, i2, i3, i4, i5;
    cout << "Enter 5 numbers: ";
    cin >> i1 >> i2 >> i3 >> i4 >> i5;
    cout << "ASCII message: " << char(i1) << " " << char(i2)
        << " " << char(i3) << " " << char(i4) << " " << char(i5) << endl;


    system("pause>0");
}

