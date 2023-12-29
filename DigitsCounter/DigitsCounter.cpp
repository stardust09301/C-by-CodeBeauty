// DigitsCounter.cpp 
// Count digits of a number

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Number: ";
    cin >> number;

    if (number == 0) //int maximum of digits will be 10 digits; more than that, it overflows; 2147483647
        cout << "You have entered 0.\n";
    else {
        if (number < 0)
            number = -1 * number;
        //1325;counter=0, 132;counter=1, 13;counter=2, 1;counter=3, ;counter=4
        int counter = 0;
        while (number > 0) {
            //number = number / 10; //counter=0, 123=>12.3=>12=>counter=1, 12=>1.2=>1=>counter=2, 1=>0.1=>0=>counter=3
            number /= 10;
            counter++;
        }
        cout << "Number contains " << counter << " digits\n";
    }
    system("pause>0");
}

