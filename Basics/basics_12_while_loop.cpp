#include <iostream>
using namespace std;

int main(){
    
    /* While Loop Syntax:

    while(condition){
        // code to be executed repeatedly as long as condition is true
    }
    
    */

    // While Loop Example 01
    int count = 1;
    while(count <= 5){
        cout << "Count is: " << count << endl;
        count++;
    }

    // While Loop Example 02
    int number;
    cout << "Enter a positive number (0 to stop): ";
    cin >> number;
    while(number > 0){
        cout << "You entered: " << number << endl;
        cout << "Enter another positive number (0 to stop): ";
        cin >> number;
    }

    // While Loop Example 03

    int cowndown = 3;

    while(cowndown > 0){
        cout<<"Happy New Year"<<endl;
        cowndown--;
    }

    // while Loop Example 04
    int a = 5;
    while(a >= 0){
        cout<<"Print the Number: "<<a<<endl;
        a--;
    } 


    /* The do/while loop is a variant of the while loop. 
    This loop will execute the code block once, before checking if the condition is true. 
    Then it will repeat the loop as long as the condition is true.

    Do/While Loop Syntax:
    
    do{
        // code to be executed at least once and then repeatedly as long as condition is true
    }
    while(condition);

    Note: The semicolon ; after the while condition is required!
    
    */

    // Do/While Loop Example 01
    int num;
    do{
        cout << "Enter a positive number (0 to stop): ";
        cin >> num;
        if(num > 0){
            cout << "You entered: " << num << endl;
        }
    }
    while(num > 0);


    // Do/While Loop Example 02
    int cowndown2 = 3;

    do{
        cout<<"Happy New Year"<<endl;
        cowndown2--;
    }
    while(cowndown2 > 0);

    // Do/While Loop Example 03
    int a1 = 5;
    do{
        cout<<"Print the Number: "<<a1<<endl;
        a1--;
    }
    while(a1 >= 6);

    // Real Life Example: Reversing a Number
    int number1 = 12345;
    int reversedNumber = 0;

    while(number1){
        int digit = number1 % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number1 /= 10;
    }
    cout<< "Reversed Number: " << reversedNumber << endl;

    return 0;
}