
// Project4_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//if/else statement

#include <iostream>
using namespace std;

int main()
{
    // User enters integer number
    // Program write out if that number is even or odd

    cout << 2 % 2 << endl;
    cout << 5 % 2 << endl;
    cout << "testing done" << endl;

    // write another if else decision point
    int number;
    cout << "Please enter whole number: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << "You have entered an even number." << endl;
    }
    else {
        cout << "You have entered an odd number." << endl;
    }
    cout << "Thanks. Bye.";

    system("pause>0");
}

