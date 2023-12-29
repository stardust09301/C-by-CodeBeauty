// CalculatorApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;
    cout << "**C++ Calculator**"<<endl;
    cin >> num1 >> operation >> num2;

    switch (operation)
    {
    case '-':cout << num1 << operation << num2 << "=" << num1 - num2; break;
    case '+':cout << num1 << operation << num2 << "=" << num1 + num2; break;
    case '*':cout << num1 << operation << num2 << "=" << num1 * num2; break;
    case '/':cout << num1 << operation << num2 << "=" << num1 / num2; break;
    //case '%':cout << num1 << operation << num2 << "=" << num1 % num2; break;// This doesn't work since both are not integers
    case '%':
        bool isNum1Int, isNum2Int;
        isNum1Int = ((int)num1 == num1);// Using casting (5==5.0), and result of it should be assigned to isNum1Int 
        isNum2Int = ((int)num2 == num2);

        if (isNum1Int && isNum2Int)//same as 'if(isNum1Int==true && isNum2Int==true)'
            cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
        else
            cout << "Not valid!";
        break;
    default:cout << "Not valid operation!" << endl;
    }

    system("pause>0");
}

