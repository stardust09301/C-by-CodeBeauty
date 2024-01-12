// PointersArrays.cpp : 
//

#include <iostream>
using namespace std;

int main()
{
    int luckyNumbers[5] = { 2,3,5,7,9 };
    cout << luckyNumbers << endl; // The name of the array is the address of first element.
    cout << &luckyNumbers[0] << endl; // the address of the fist element, same as the above
    cout << luckyNumbers[2] << endl;
    cout << *(luckyNumbers + 2) << endl;//same as above using dereference

    // How we enter the value rather than hard coded
    int luckyNumber[5]; //Let the user input 2, 3, 5, 7, 19
    for (int i = 0; i <= 4; i++) {
        cout << "Number: ";
        cin >> luckyNumber[i];
    }
    for (int i = 0; i <= 4; i++) { // Be careful! do not put i<=5 because 6th location/memory address would not belong here
        cout << *(luckyNumber+i) << " "; // dereference to show the value
    }

    system("pause>0"); //put the break point and watch what values the line, cin >> luckyNumbers[i]; have
    return 0;
}

