#include <iostream>
#include <Shape.h>

using namespace std;

int main()
{
    int firstValue, secondValue;
    int *myPointer;
    Shape myRectangle(4,5);

    myPointer = &firstValue;
    *myPointer = 1;
    myPointer = &secondValue;
    *myPointer = 2;

    cout << "The first value is: " << firstValue << endl;
    cout << "The second value is: " << secondValue << endl;

//    myRectangle.set_values(3,4);
    cout << "The area is: " << myRectangle.area();


    return 0;
}
