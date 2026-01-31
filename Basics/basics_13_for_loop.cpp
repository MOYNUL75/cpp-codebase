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


    return 0;
}