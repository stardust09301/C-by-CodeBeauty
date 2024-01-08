// ConsoleApplication7.cpp : 
// Recursion - Recursive function->Function invokes itself

#include <iostream>
using namespace std;

int recursive_sum(int m, int n) {//m=2, n=4
   // Base case => something that will break recursion so that it won't be infinte recursion
   //Without this base case, this never stops
    if (m == n)
        return m;
    return m + recursive_sum(m + 1, n); //2+(3+(4))=9
}
//Sum numbers between m-n
int main()
{
    int m = 1, n = 552;
   /* int m=2, n=4;*/
    cout << "Sum = " << recursive_sum(m, n);

    /*int sum = 0;
    for (int i = m; i <= n; i++) {
        sum += i;
    }
    cout << "Sum=" << sum;*/ //We can use recursive function
    system("pause>0");
}

