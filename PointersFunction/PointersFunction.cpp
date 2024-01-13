// PointersFunction.cpp 
// Return multipl values from a function using pointers

#include <iostream>
using namespace std;

//function that returns smallest number
int getMin(int numbers[], int size) { // the second parameters to use to figure out how many iterations we need to go through
    int min = numbers[0]; //min ; smallest would be assigned to the first element of the array; 
    //in that case we can keep updating the min value while going through the array. 
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min)
            min = numbers[i];
    }
    return min;
}
int getMax(int numbers[], int size) { 
    int max = numbers[0]; //max ; largest would be assigned to the first element of the array; 
    //in that case we can keep updating the max value while going through the array. 
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max)
            max = numbers[i];
    }
    return max;
}
// How we can use one function only to get both min and max => using pointers
void getMinAndMax(int numbers[], int size, int* min,  int*max) { //We will have to pass those two values by the reference. 
    //We will have to pass the addresses of the two values. The function getMinAndMax will change the value stored on those two addresses
    //and the main function has access to those two addresses(main function is able to access those two values)
    for (int i = 1; i < size; i++) {
        if (numbers[i] > *max) // we need to dereference
            *max = numbers[i];
        if (numbers[i] < *min) // we need to dereference
            *min = numbers[i];
    }
}


int main()
{
    // create an array
    int numbers[5] = { 5,4,-2,29,6 };
    //cout << "Min is " << getMin(numbers, 5) << endl; //Invoke
    //cout << "Max is " << getMax(numbers, 5) << endl;
    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers, 5, &min, &max);//passing parameters using reference; without it you won't be able to see value changes
    cout << "min is " << min << endl;
    cout << "max is " << max << endl;

    system("pause>0");
    return 0;
}


