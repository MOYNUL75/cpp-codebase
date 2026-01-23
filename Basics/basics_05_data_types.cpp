#include <iostream>
using namespace std;

int main(){

    // Data Types in C++
    // C++ has several built-in data types to store different kinds of data.
    // Here are some common data types:

    // 1. Integer types-->
    int myInt = 42;               // Integer type
    short myShort = 10;          // Short integer type
    long myLong = 100000L;      // Long integer type
    long long myLongLong = 10000000000LL; // Long long integer type
    // Example outputs
    cout << "Integer: " << myInt << endl;
    cout << "Short: " << myShort << endl;
    cout << "Long: " << myLong << endl;
    cout << "Long Long: " << myLongLong << endl;

    // 2. Floating-point types
    float myFloat = 3.14f;      // Single precision floating-point type
    double myDouble = 3.14159265359; // Double precision floating-point type
    long double myLongDouble = 3.14159265358979323846L;
    // Example outputs
    cout << "\nFloat: " << myFloat << endl;
    cout << "Double: " << myDouble << endl;
    cout << "Long Double: " << myLongDouble << endl;

    // 3. Character type
    char myChar = 'A';          // Character type
    // Example outputs
    cout << "\nCharacter: " << myChar << endl;

    // 4. Boolean type
    bool myBool = true;         // Boolean type
    // Example outputs
    cout << "\nBoolean: " << myBool << endl;
    
    // 5. Create a string variable
    string greeting = "Hello";

    // Output string value
    cout << greeting;


    // 6. Void type (used for functions that do not return a value)
    
    //A floating point number can also be a scientific number with an "e" to indicate the power of 10:
    float f1 = 35e3;
    double d1 = 12E4;
    cout << "\nScientific Notation:" << endl;
    cout <<"35e3 : "<< f1 << endl;
    cout <<"12E4 : " << d1 << endl;

    //The auto Keyword: The auto keyword is used to declare a variable with automatic type deduction. The compiler determines the type of the variable based on the value assigned to it.
    auto var1 = 5;       // int
    auto var2 = 3.14;    // double
    auto var3 = 'A';     // char
    cout << "\nAuto Keyword:" << endl;
    cout << "var1 (int): " << var1 << endl;
    cout << "var2 (double): " << var2 << endl;
    cout << "var3 (char): " << var3 << endl;
    

    return 0;
}