// InterviewQuestion1_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// Program for swapping values of two variables
	int a = 20;
	int b = 10;

	int temp = a;//third glass, variable
	a = b;
	b = temp;

	cout << "a= " << a << ", b = " << b << endl;

	// Program for swapping values of two variables without using third variable
	int c = 20;
	int d = 10;
	c = c + d; //30
	d = c - d; //20
	c = c - d; //10

	cout << "c = " << c << endl;
	cout << "d = " << d;

	system("pause>0");
}

