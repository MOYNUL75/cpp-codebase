    /*
    The most common variable types in C++ are:
    1. int - stores integers (whole numbers), without decimals, such as 123 or -123
    2. double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    3. char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    4. string - stores text, such as "Hello World". String values are surrounded by double quotes
    5. bool - stores values with two states: true or false
    */

    // Syntax: type variableName = value;

#include <iostream>
using namespace std;

int main(){
    int myNum = 15;
    cout <<"My Number is: "<< myNum << endl;

    int myAge;
    myAge = 26;
    cout <<"My Age is: "<< myAge << endl;

    // Declaring multiple variables of same type
    int x = 27, y =57, z = 75;
    cout <<"x: "<< x << "\ny: "<< y << "\nz: "<< z << endl;

    // Assigning same value to multiple variables
    int m, n, f;
    m = n = f = 75;
    cout <<"M: " << m << "\nN :" << n << "\nF :" << f << endl;

    /*
    The naming rules for variables are:
    1. Variable names must begin with a letter (A-Z, a-z) or an underscore (_)
    2. Variable names cannot begin with a number (0-9)
    3. Variable names can only contain alpha-numeric characters and underscores (A-Z, a-z, 0-9, and _ )
    4. Variable names are case-sensitive (age, Age and AGE are three different variables)
    5. Variable names cannot be C++ keywords (such as int, double, char, etc.)
    */


    //Constants: which means unchangeable and read-only. ):

    const int myConstantNum = 50;
    cout <<"My Constant Number is: "<< myConstantNum << endl;
    
    return 0;
}