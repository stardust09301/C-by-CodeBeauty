// OperatorsProjects2_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
  //What is going to be the result of following lines? 
	int a = 5, b = 4;
	cout << a + (b++) << endl; //? 9
	cout << (--a) + b << endl; //? 9 not 8 ***

	cout << !(true && false) << endl;//? 1
	cout << (true && false || true) << endl; //? 1

	int x = 7;
	cout << (++x <= 9 && x + 2 >= 10) << endl; //? 1 not 0 ***

	int y = 3;
	cout << (y == y++) << endl;//? 1

	float z = 8;
	z += 2;
	cout << z << endl;//? 10
	z /= 2;
	cout << z << endl;//? 5

	system("pause>0");
	
}

