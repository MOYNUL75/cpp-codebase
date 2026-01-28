#include <iostream>
using namespace std;

int main() {
    // Boolean values
    bool isTrue = true;
    bool isFalse = false;

    cout << "The value of isTrue: " << isTrue << endl;   // Outputs 1
    cout << "The value of isFalse: " << isFalse << endl; // Outputs 0

    // Boolean expressions
    int a = 10;
    int b = 20;

    cout << "Is a less than b? " << (a < b) << endl;   // Outputs 1 (true)
    cout << "Is a greater than b? " << (a > b) << endl; // Outputs 0 (false)

    // Printing true/false With boolalpha
    cout << boolalpha; // Enable boolalpha to print true/false instead of 1/0
    cout << "Is a equal to b? " << (a == b) << endl;    // Outputs false
    cout << "Is a not equal to b? " << (a != b) << endl; // Outputs true

    // Resetting Back With noboolalpha
    cout << noboolalpha;
    cout << "Is a less than or equal to b? " << (a <= b) << endl; // Outputs 1 (true)
    cout << "Is a greater than or equal to b? " << (a >= b) << endl; // Outputs 0 (false)   

    // Boolean Expressions with Logical Operators
    bool result = (a < b) && (a != 0); // Logical AND
    cout << "Result of (a < b) && (a != 0): " << result << endl; // Outputs 1 (true)
    
    result = (a > b) || (b != 0); // Logical OR
    cout << "Result of (a > b) || (b != 0): " << result << endl; // Outputs 1 (true)
    
    result = !(a < b); // Logical NOT
    cout << "Result of !(a < b): " << result << endl; // Outputs 0 (false)

    return 0;
}