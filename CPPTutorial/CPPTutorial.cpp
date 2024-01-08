// CPPTutorial.cpp : 
// generics-should be able to pass the type to the function

#include <iostream>
using namespace std;

// Use Generics to avoid code redundancy- use template
template<typename T> //T is generic data type - we can use 'template<class T>'
//Generic function
void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}
/* Function overloading 
//swap=> passing parameters by reference
void Swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void Swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}
*/

int main()
{
    int a=5, b=7;
    cout << a << " - " << b << endl;
    Swap<int>(a, b); //or Swap(a,b);
    cout << a << " - " << b << endl;

    char c = 'c', d = 'd';
    cout << c << " - " << d << endl;
    Swap<char>(c, d); //or Swap(c,d);
    cout << c << " - " << d << endl;

    float e = 1.4, f = 2.4;
    cout << e << " - " << f << endl;
    Swap<float>(e, f); //or Swap(c,d);
    cout << e << " - " << f << endl;

    system("pause>0");
    return 0;
}

