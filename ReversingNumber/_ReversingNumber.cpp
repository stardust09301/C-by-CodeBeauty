// ReversingNumber.cpp 
// Reversing number

#include <iostream>
using namespace std;

void main()
{
    int number, reversedNumber=0; //0
    cout << "Number: ";
    cin >> number; //123

    while (number!=0) {
        reversedNumber *= 10;
        //int lastDigit = number % 10;
        //reversedNumber += lastDigit;
        reversedNumber += number % 10;
        number /= 10;
    }
    cout << "Reversed: " << reversedNumber;

    system("pause>0");
}

