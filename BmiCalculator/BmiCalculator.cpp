// BmiCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void main()
{
    // BMI calculator
    // weight(kg) /(height * height)(m)
    // underweight < 18.5
    // Normal weight 18.5-24.9
    // Overweight >25
    float weight, height, bmi;
    cout << "Weight(kg), Height(m): ";
    cin >> weight >> height;
    bmi = weight / (height * height);

    if (bmi < 18.5)
        cout << "Underweight"<<endl;
    else if(bmi > 25)
        cout << "Overweight" << endl;
    else
        cout << "Normal weight" << endl;
    cout << "Your BMI is " << bmi;

    system("pause>0");
}

