// Application2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int yearOfBirth = 1995;
    char gender = 'f';
    bool isOlderThan18 = true;
    float averageGrade = 4.5; // taking 4 bytes
    double balance = 45678945856;// double is double of float. Taking 8 bytes.

    cout << "Size of int is " << sizeof(int) << " bytes\n";
    // -1, -2, -3,..., -2147483648
    cout << "Int min value is " << INT_MIN << endl;
    // 0, +1, +2, +3,..., +2147483647
    cout << "Int max value is " << INT_MAX << endl;
    cout << "Size of unsigned int is " << sizeof(unsigned int) << "bytes\n";
    cout << "UInt max value is " << UINT_MAX << endl;
    cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    cout << "Size of char is " << sizeof(char) << " bytes\n";
    cout << "Size of float is " << sizeof(float) << " bytes\n";
    cout << "Size of double is " << sizeof(double) << " bytes\n";

    // datatype overflow
    int intMax = INT_MAX;
    cout << intMax << endl;
    cout << intMax + 1; // It is working like a clock; datatype overflow

    system("pause>0");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
