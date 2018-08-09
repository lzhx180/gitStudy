#include <iostream>
#include <string>


using namespace std;

#define tempValue 2.12
#define endSymbol '\n' // preprocessor definitions

const double pi = 3.1415926;
const char newLine = '\n';

int main()
{
    string strHello = "Input value for calculation!";
    string strBack = "The result is: ";
    double resultValue = 0;
    double inputValue = 0;


    cout << strHello << newLine;
    cin >> inputValue;

    resultValue = pi*inputValue;

    cout << strBack << resultValue << newLine;
    return 0;
}
