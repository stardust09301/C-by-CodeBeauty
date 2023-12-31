// DoWhileLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void main()
{
    int usersPin = 1234, pin, errorCounter = 0;

    do {
        cout << "PIN: ";
        cin >> pin;
        if (pin != usersPin)
            errorCounter++;
    } while (errorCounter<3 && pin!=usersPin); // do{}while;

    if (errorCounter < 3)
        cout << "Loading...";
    else
        cout << "Blocked...";



    system("pause>0");
}

