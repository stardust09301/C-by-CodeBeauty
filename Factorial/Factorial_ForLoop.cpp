// Factorial.cpp : For Loops.
// The fatorial of a number
// 6!=1*2*3*4*5*6=720

#include <iostream>
using namespace std;

void main()
{
    int number;
    cout << "Number: ";
    cin >> number; //3
    
    int factorial = 1; //1 //2 //6

    for (int i = 1; i <= number; i++) { //i=1, i=2, i =3, i=4(doesn't meet condition)
        factorial = factorial * i;
    }
    cout << number << "!=" << factorial;
    
    /* Another way of writing factorial
    //6!=6*5*4*3*2*1=720
    for (int i = number; i >= 1;i--) {
        factorial = factorial * i;

    }
    */

    system("pause>0");
}

