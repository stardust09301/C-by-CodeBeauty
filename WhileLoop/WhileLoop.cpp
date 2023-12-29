// WhileLoop.cpp : 
// Write out all the numbers between 100-500 that are
// divisible by 3 and 5

#include <iostream>
using namespace std;

int main()
{

	int counter = 100;
	while (counter<=500) 
	{
		if (counter % 3 == 0 && counter % 5 == 0)
			cout << counter << " is divisible\n";
		//cout<<"Infinite loop"; //  Without the following line, this will print out infinitely until the program crashes.
		counter++;	// Whithout this part, the loop is infinite loop
	}
	system("pause>0");
}

