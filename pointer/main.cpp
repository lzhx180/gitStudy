#include <iostream>
#include <Rectangle.h>
#include <Triangle.h>

using namespace std;

int main()
{
    int firstValue, secondValue;
    int *myPointer;
    Rectangle myRectangle;
    Triangle myTriangle;

    myRectangle.set_values(4,5);
    myTriangle.set_values(4,5);

    myPointer = &firstValue;
    *myPointer = 1;
    myPointer = &secondValue;
    *myPointer = 2;

    cout << "The first value is: " << firstValue << endl;
    cout << "The second value is: " << secondValue << endl;

//    myRectangle.set_values(3,4);
    cout << "The area of rectangle is: " << myRectangle.area();
    cout << "The area of triangle is: " << myTriangle.area();


    return 0;
}
