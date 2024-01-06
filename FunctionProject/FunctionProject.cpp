// FunctionProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void function();
//void function() {
//    cout << "Hello from function()" << endl;
//} // has to put it before main function or put the declaration has to be placed first

void main()
{
    cout << "Hello from main()\n";
    function();
    function();
    function(); //functions are reusable
    
    system("pause>0");
}

void function() {
    cout << "Hello from function()" << endl;
} // Put the declaration has to be placed first and place this definition after main=>more readable