#include <iostream>
using namespace std;

int main(){
    // Operators in C++
    // Operators are special symbols that perform operations on variables and values.
    // Here are some common types of operators: 
    int a = 10;
    int b = 5;
    // 1. Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl; // Addition
    cout << "a - b = " << (a - b) << endl; // Subtraction
    cout << "a * b = " << (a * b) << endl; // Multiplication
    cout << "a / b = " << (a / b) << endl; // Division
    cout << "a % b = " << (a % b) << endl; //
    cout << "a = " << (a) << endl;     
    cout << "b = " << (b) << endl;     
    cout << "a++ = " << (a++) << endl;     // Increment
    cout << "b-- = " << (b--) << endl;     // Decrement
    cout << "a = " << (a) << endl;     
    cout << "b = " << (b) << endl;  
    cout << "++a = " << (++a) << endl;     // Increment
    cout << "--b = " << (--b) << endl;     // Decrement
    cout << "a = " << (a) << endl;     
    cout << "b = " << (b) << endl;

    // 2. Assignment Operators
    cout << "\nAssignment Operators:" << endl;
    int c = 20; // Simple assignment
    cout << "c = " << c << endl;
    c += 5; // c = c + 5
    cout << "c += 5: " << c << endl;
    c -= 3; // c = c - 3
    cout << "c -= 3: " << c << endl;
    c *= 2; // c = c * 2
    cout << "c *= 2: " << c << endl;
    c /= 4; // c = c / 4
    cout << "c /= 4: " << c << endl;
    c %= 3; // c = c % 3
    cout << "c %= 3: " << c << endl;

    // 3. Comparison Operators
    cout << "\nComparison Operators:" << endl;
    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "a > b: " << (a > b) << endl;   // Greater than
    cout << "a < b: " << (a < b) << endl;   // Less than
    cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to
    cout << "a <= b: " << (a <= b) << endl; // Less than or equal to

    // 4. Logical Operators
    cout << "\nLogical Operators:" << endl;
    cout << "(a > b) && (a != 0): " << ((a> b) && (a != 0)) << endl; // Logical AND
    cout << "(a < b) || (b != 0): " << ((a < b) || (b != 0)) << endl; // Logical OR
    cout << "!(a == b): " << (!(a == b)) << endl; // Logical NOT


    // C++ Operator Precedence : 
    cout << "\nOperator Precedence Example:" << endl;
    int result = a + b * 2; // Multiplication has higher precedence than addition
    cout << "a + b * 2 = " << result << endl; // Should output a + (b * 2)
    result = (a + b) * 2; // Parentheses change the precedence
    cout << "(a + b) * 2 = " << result << endl;

    // Order of Operations
    /* 
        cout << "\nOrder of Operations Example:" << endl;
        Here are some common operators in C++, from highest to lowest priority:

        ()  ----------- Parentheses
        *, /, % ------- Multiplication, Division, Modulus
        +, - ---------- Addition, Subtraction
        >, <, >=, <= -- Comparison
        ==, !=  ------- Equality
        &&  ----------- Logical AND
        ||  ----------- Logical OR
        =   ----------- Assignment

    Remember: Parentheses always come first. Use them to control the order of your calculations.
    */



    return 0;
}