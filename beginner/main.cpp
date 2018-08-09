#include <iostream>
#include <string>


using namespace std;

#define tempValue 2.12
#define endSymbol '\n' // preprocessor definitions

const double pi = 3.1415926;
const char newLine = '\n';

double calculator (double a, double b)
{
    return a*b;
}

void showResult (string a, double b)
{
    cout << a << b << newLine;
}

int main()
{
    string strHello = "Input value for calculation!";
    string strBack = "The result is: ";
    double resultValue = 0;
    double inputValue = 0;
    int arrayTemp[4] = {1 ,2 ,3,4};


    cout << strHello << newLine;
    cin >> inputValue;

    resultValue = calculator(pi,inputValue);

    showResult(strBack, resultValue);

    cout << sizeof(arrayTemp)/sizeof(arrayTemp[0]);
//    cout << strBack << resultValue << newLine;
    return 0;

//    string strName;
//    string strAskName = "What is your name?";
//    string strHello = "Hello ";
//    string strAskHobby = "What is your hobby?";
//
//    cout << strAskName << newLine;
//    getline(cin, strName);
//    cout << strHello << strName << newLine;
//    cout << strAskHobby << newLine;
//    getline(cin,strName);
//    cout << "I like " << strName << " too!" << newLine;

    return 0;
}
