// OperatorsProjects_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << 5 + 2 << endl;
    cout << 5 / 2 << endl; //getting 2
    cout << 5 / 2.0 << endl; //to get 2.5
    cout << 5.0 / 2 << endl; //to get 2.5
    cout << 5.0 / 2.0 << endl;  //to get 2.5
    cout << 5 % 2 << endl; //1

    //unary operators ++, --
    int counter = 7;
    counter++;
    cout << counter << endl;
    counter--;
    cout << counter << endl;

    //There are specific rules
    int counter2 = 7;
    cout << counter2++ << endl;//This gives 7. post increment
    int counter3 = 8;
    cout << ++counter3 << endl;//This gives 9. pre increment
    cout << counter3-- << endl; //9
    cout << counter3 << endl; //8

    //To clear the console
    system("cls");

    //<,>,<=,>=,==,!= 
    // Relational operators
    int a = 5, b = 5;
    cout << (a > b)<< endl; //0;false
    cout << (a == b)<< endl;    //1;true
    cout << (a != b) << endl; //0;false
    system("cls");

    //Logical operators: &&, ||,!
    int c = 5, d = 8;
    cout << (c != d) <<endl;
    system("cls");

    cout << (c == 5 && d == 5)<<endl; //0
    cout << (c == 5 || d == 5) << endl; //1
    cout << !(c == 5 || d == 5) << endl; //0
    cout << (c == 5 && d == 5+3) << endl; //1;arithmetic operators are the biggest priority>relational>least would be logical
    system("cls");
    
    // operators of assignment:6 of those;  =, +=, -=, *=, /=, %=
    int x = 5;
    x += 7;
    // same as 'x = x + 7;' // whatever is on the right hand side is assigned to the left side. 
    //Because arithmetic operators have priorities over assignment operators(lowest priorities)
    cout << x << endl;



    system("pause>0");
}

