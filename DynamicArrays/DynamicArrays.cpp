// DynamicArrays.cpp 
// array-continuous memory
// disadvantage of array- the size of array is constant

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Size: ";
    cin >> size;
    /*int myArray[size];*/// Gives error; disadvantage of array- the size of array is constant

    //2 commands working with dynamic array- 1. using'new'=>allocate memory for us
    //                                     - 2. using'delete' =>deallocate memory when we don't need; important so that memory can be reused
    
    int* myArray = new int[size]; // new keyword allocated an array of this size that user has specified
    // The address of first element of the array is stored in myArray pointer

    //How we enter elements of the array and how we write them out
    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "] ";
        cin >> myArray[i];
    }
    for (int i = 0; i < size; i++) {
        /*cout<< myArray[i]<<"  ";*/ // square brackets are one way of dereferencing of the array
        cout << *(myArray + i) << "  ";// Another way of dereferencing of the array or access to the array on a specific position
    }
    // It's important when we use 'new', we need to use 'delete' later
    delete[]myArray; //deallocation
    myArray = NULL; //To avoid program crash

    system("pause>0");
}

