#include <iostream>
#include <cmath>  // include the cmath library for mathematical functions
using namespace std;

int main(){

    // max() function
    int a = 10;
    int b = 20;
    cout << "The maximum of " << a << " and " << b << " is: " << max(a, b) << endl;

    // min() function
    cout << "The minimum of " << a << " and " << b << " is: " << min(a, b) << endl;

    // abs() function
    int c = -15;
    cout << "The absolute value of " << c << " is: " << abs(c) << endl;

    // pow() function
    double base = 2.0;
    double exponent = 3.0;
    cout << base << " raised to the power of " << exponent << " is: "<< pow(base, exponent) << endl;
    
    // sqrt() function
    double number = 16.0;
    cout << "The square root of " << number << " is: " << sqrt(number) << endl;

    // round() function
    double numToRound = 4.6;
    cout << numToRound << " rounded is: " << round(numToRound) <<endl;

    // ceil() function
    double numToCeil = 4.2;
    cout << numToCeil << " ceiled is: " << ceil(numToCeil) << endl;
    
    // floor() function
    double numToFloor = 4.8;
    cout << numToFloor << " floored is: " << floor(numToFloor) << endl;

    return 0;
}