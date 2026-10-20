#include <string>
#include <iostream>
using namespace std;

int main(){
    int myNum = 5;               // Integer (whole number)
    cout << myNum << endl;

    float myFloatNum = 5.99;     // Floating point number
    cout << myFloatNum << endl;

    double myDoubleNum = 9.98;   // Floating point number
    cout << myDoubleNum << endl;

    char myLetter = 'D';         // Character
    cout << myLetter << endl;

    bool myBoolean = true;       // Boolean
    cout << myBoolean << endl;

    string myText = "Hello";     // String
    cout << myText << endl;

    int nums[4] = {2, 4, 6, 8};  // Array
    cout << nums[0] << endl;

    nums[0] = 22;
    cout << nums[0] << endl;

    cout << "adding an int and char: " << myNum << " + " << myLetter<< " = ";
    myNum = myNum + myLetter;
    cout << myNum;

    return 0;
}