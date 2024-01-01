// RectangleShape.cpp :
//

#include <iostream>
#include <iomanip>  //contains function setw
using namespace std;

void main()
{
    int height, width;
    cout << "Height: ";
    cin >> height;
    cout << "width: ";
    cin >> width;
    char symbol;
    cout << "symbol: ";
    cin >> symbol;

    //outerloop for height
    for (int h = 0; h < height; h++) {
        for (int w = 0; w < width; w++) {
            cout << setw(3) << symbol; //set with function(using iomanip library)
        }
        cout << endl;
    }
    system("pause>0");
}

