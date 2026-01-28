#include <iostream>
#include <string>
using namespace std;

int main() {

    // if Statement Example
    int x = 10;
    int y = 20;
    if (x < y) {
        cout << "X is less than Y" << endl;
    }

    // else Statement Example
    int a = 30;
    int b = 15;
    if (a < b) {
        cout << "A is less than B" << endl;
    }
    else {
        cout << "A is not less than B" << endl;
    }

    // if-else-if Statement Example
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    }
    else if (number < 0) {
        cout << "The number is negative." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }

    // Shorthand if-else (Ternary Operator) Example 01
    int num1 = 5, num2 = 10;
    int maxValue = (num1 > num2) ? num1 : num2;
    cout << "The maximum value is: " << maxValue << endl;

    // Shorthand if-else (Ternary Operator) Example 02
    int age = 18;
    string eligibility = (age >= 18) ? "Eligible to vote" : "Not eligible to vote";
    cout << "Voting eligibility: " << eligibility << endl;

    // Shorthand if-else (Ternary Operator) Example 03
    int num = 27;
    string signResult = (num < 0) ? "Negative" : "Non-Negative";
    cout << "The number is: " << signResult << endl;

    // Shorthand if-else (Ternary Operator) Example 04
    int num3 = -7;
    string evenOddResult = (num3 % 2 == 0) ? "Even" : "Odd";
    cout << "The number is: " << evenOddResult << endl;

    // Nested if-else Example
    int score;
    cout << "Enter your score (0-100): ";
    cin >> score;

    if (score >= 0 && score <= 100) {
        if (score >= 90) {
            cout << "Grade: A+" << endl;
        }
        else if (score >= 80) {
            cout << "Grade: B+" << endl;
        }
        else if (score >= 70) {
            cout << "Grade: C+" << endl;
        }
        else if (score >= 60) {
            cout << "Grade: D+" << endl;
        }
        else {
            cout << "Grade: F (Laddu)" << endl;
        }
    }
    else {
        cout << "Invalid score entered." << endl;
    }

    // Logical Operators Example (AND)
    int age2;
    cout << "Enter your age: ";
    cin >> age2;

    if (age2 >= 18 && age2 <= 65) {
        cout << "You are eligible to work." << endl;
    }
    else {
        cout << "You are not eligible to work." << endl;
    }

    // Logical Operators Example (OR)
    char grade;
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;

    if (grade == 'A' || grade == 'B') {
        cout << "You passed with distinction!" << endl;
    }
    else {
        cout << "You did not pass with distinction." << endl;
    }

    // Logical Operators Example (NOT)
    bool isRaining;
    cout << "Is it raining? (1 for Yes, 0 for No): ";
    cin >> isRaining;

    if (!isRaining) {
        cout << "You can go for a walk." << endl;
    }
    else {
        cout << "Better to stay indoors." << endl;
    }

    // Real Life Example
    int temperature;
    cout << "Enter the current temperature in Celsius: ";
    cin >> temperature;

    if (temperature > 30) {
        cout << "It's a hot day. Stay hydrated!" << endl;
    }
    else if (temperature >= 20 && temperature <= 30) {
        cout << "It's a warm day. Enjoy the weather!" << endl;
    }
    else if (temperature >= 10 && temperature < 20) {
        cout << "It's a cool day. You might need a light jacket." << endl;
    }
    else {
        cout << "It's cold outside. Dress warmly!" << endl;
    }

    return 0;
}
