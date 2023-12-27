
#include <iostream>
using namespace std;

int main()
{
    // Rules of variables
    // 1.You should give meaningful names for the variables
    // 2.The variables cannot contain any special characters except underscore. You cannot start with numbers.
    // 3.Your variables cannot contain any blank spaces.
    float annualSalary;
    cout << "Please enter your annual salary: ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary << endl;
    cout << "In 10 years you will earn " << annualSalary * 10;

    char character = 'a';// single quotes are for characters
    system("pause>0");
}
