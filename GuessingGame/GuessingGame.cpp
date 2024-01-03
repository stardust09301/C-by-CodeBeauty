<<<<<<< HEAD
// GuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int hostUserNum, guestUserNum;
    cout << "Host: ";
    cin >> hostUserNum;
    system("cls"); //clear our screen to make a guessing game
    cout << "Guest: ";
    cin >> guestUserNum;

    /*if (hostUserNum == guestUserNum)
        cout << "Correct!";
    else
        cout << "Failed!";*/

    //Ternary => codition? execution1(if true):excution2(if false);
    (hostUserNum == guestUserNum) ?  cout << "Correct!" : cout << "Failed!";

    system("pause>0");
}


