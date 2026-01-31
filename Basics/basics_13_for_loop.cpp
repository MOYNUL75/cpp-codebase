#include <iostream>
using namespace std;

int main(){
    // For Loop Syntax:
    /*
    for(initialization; condition; update){
        // code to be executed repeatedly as long as condition is true
    }
    */

    // For Loop Example 01
    for(int i = 1; i <= 5; i++){
        cout << "Count is: " << i << endl;
    }

    // For Loop Example 02
    for(int i = 0; i < 10; i +=2){
        cout <<  "Even Number: " << i << endl;      
    }

    // For Loop Example 03
    for(int i = 5; i > 0; i--){
        cout<<"Happy New Year"<<endl;
    }

    // For Loop Example 04  
    for(int a = 5; a >= 0; a--){
        cout<<"Print the Number: "<<a<<endl;
    }

    // Sum of 1 to 100 using For Loop
    int sum = 0;
    for(int i = 1; i <= 100; i++){
        sum += i;
    }
    cout << "Sum of numbers from 1 to 100 is: " << sum << endl;

    // Multiplication Table of 7 using For Loop
    int number = 7;
    cout << "Multiplication Table of " << number << " is:" << endl;
    for(int i = 1; i <= 10; i++){
        cout << number << " x " << i << " = " << number * i << endl;
    }

    // Nested For Loop Example 01
    cout << "Nested For Loop Example 01" << endl;
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 2; j++){
            cout << "i: " << i << ", j: " << j << endl;
        }
    }

    // Nested For Loop Example 02
    cout << "Nested For Loop Example 02" << endl;
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 3; j++){
            cout << "* ";
        }
        cout << endl;
    }

    // Nested For Loop Example 03 - Print a 5x5 Grid of Numbers
    cout << "Nested For Loop Example 03" << endl;
    cout << "5x5 Grid of Numbers:" << endl;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cout << j << " ";
        }
        cout << endl;
    }


    // Nested For Loop Example 04
    cout << "Nested For Loop Example 04" << endl;
    for (int i = 1; i <= 3; i++){
        for(int j = 1; j <=3; j++){
            cout<<i * j<<" ";
        }
        cout<<endl;
    }

    // The foreach Loop (Range-based for loop)
    /* Syntax:
         for (type variableName : arrayName) {
         // code block to be executed
        }
    */
    cout << "Range-based For Loop Example 01" << endl;
    int numarray[] = {10, 20, 30, 40, 50};
    for(int num : numarray){
        cout <<" Number: " << numarray << endl;
    }

    
    return 0;
}