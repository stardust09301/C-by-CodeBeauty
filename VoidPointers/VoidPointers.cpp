// VoidPointers.cpp 
// Pointers are special variables that can hold an address(same type). Integer pointer can hold address of integer variable;
// char pointer can hold address of char variable.... Exception-> void pointer can hold any; 
// Void Pointer Limitation-> You cannot directly dereference void pointer

#include <iostream>
using namespace std;
//  To write out the variable 'number' using a function that receives a pointer
void printNumber(int* numberPtr) {
    //dereferencing
    cout << *numberPtr << endl;
}
void printLetter(char* charPtr) {
    //dereferencing
    cout << *charPtr << endl;
}
//Void pointer can hold any data type.
// // Where we pass integer pointer, we pass'i'; pass character pointer, we pass 'c'; pass float, we pass 'f'; double, 'd'...
void print(void* ptr, char type) {
    switch (type) {
    case 'i': cout << *((int*)ptr) << endl; break;// handle int*; You cannot directly dereference void pointer; when user pass integer pointer, 
        //cast void* ptr to integer pointer first; in order to access the address that integer pointer is storing;
        // and write out the value stored on the address, we derefernce the pointer
    case 'c': cout << *((char*)ptr) << endl; break;// handle char*

    }
}
int main()
{
    int number = 5;
    char letter = 'a';
    //taking the address of 'number' variable
    /*printNumber(&number);
    printLetter(&letter);*/
    print(&number, 'i');
    print(&letter, 'c');
    system("pause>0");
    return 0;
}

