// FunctionsProject_2.cpp 
// Return type of function

#include <iostream>
using namespace std;

bool isPrimeNumber(int number) {
    bool isPrimeFlag = true; 
    for (int i = 2; i < number; i++) {
        // the flag is false
        if (number % i == 0) {
            return false; // to simplify the fillowing two lines
            //isPrimeFlag = false;
            //break; // don't iterate anymore
        }
    }
    return true;
    //more readable than return isPrimeFlag;
}

void main()
{
    int number;
    cout << "Number: ";
    cin >> number;

    //bool isPrimeFlag = true; //flag=> assigned to true meaning assuming all the numbers are prime numbers
    //for (int i = 2; i < number; i++) {
    //    // the flag is false
    //    if (number % i == 0) {
    //        isPrimeFlag = false;
    //        break; // don't iterate anymore
    //   }
    //}
    // Following is more readable

    bool isPrimeFlag = isPrimeNumber(number); // added to define isPrimeNumber variable

    if (isPrimeFlag)
        cout << "Prime number" << endl;
    else
        cout << "Not Prime number" << endl;

    // Another logic
    for (int i = 1; i <= 1000; i++) {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
            cout << i << " is prime number\n";
    }

    system("pause>0");
}


