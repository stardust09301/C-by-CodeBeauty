// FunctionsProject.cpp 

#include <iostream>
using namespace std;

void introduceMe(string name, string city, int age = 0) {//default parameter, that means you don't have to pass this parameter
    //You cannot specify the parameter in the middle value without entering the last one
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    if(age!= 0){ // If it will pass the only default value, do not print the age; If the user entered the age,
    cout << "I am " << age << " years old" << endl;
    }

}
void main()
{
    string name, city;
    int age;
    cout << "Name: ";
    cin >> name;
    cout << "City: ";
    cin >> city;
    cout << "Age: ";
    cin >> age;
    introduceMe(name, city, age);

    //introduceMe("Jenna", "Seoul"); //Invoke; possible since the default value is present
    //cout << endl;
    //introduceMe("Alex", "Toronto", 15);//Invoke
    system("pause>0");
}



