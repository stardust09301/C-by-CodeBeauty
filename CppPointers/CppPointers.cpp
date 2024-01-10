// CppPointers.cpp 
// Pointers stores memory location

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    cout << &n << endl; // address of the n variable //00000052AA96F814
    //How to create a pointer to hold n variable
    int* ptr = &n;
    cout << ptr << endl; //00000052AA96F814

    //How can I access the value that is stored on the address using pointers
    // In order to that, I have to dereference the pointer
    // To write out the value of the address
    cout << *ptr << endl; //5

    // To change the value stored in ptr address- *ptr: Please access this memory location
    *ptr = 10; // We have dereferenced the pointer; meaning change the value on that address
    cout << *ptr << endl; //10
    cout << n << endl; //10
  
   /* int* ptr2; 
    *ptr2 = 7;*/ // Problem; uninitialized loca variable ptr2 used; ptr2 doesn't have address
    //To fix it, create a variable
    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout << "v=" << v << endl;

    system("pause>0");
    return 0;
}

