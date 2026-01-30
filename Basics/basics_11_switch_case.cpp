#include <iostream>
using namespace std;

int main() {

    // switch-case Statement Example 01
    int day;
    cout << "Enter a number (1-7) to get the corresponding day of the week: ";
    cin >> day;
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }



    // switch-case Statement Example 02
    char grade;
    cout << "Enter your grade (A, B, C, D, F): ";
    cin  >> grade;

    switch (grade){

        case 'A':
            cout << "Excellent!" << endl;
        break;
        case 'B':
            cout << "Very Good!" << endl;
        break;
        case 'C':
            cout << "Very Good!" << endl;
        break;
        case 'D':
            cout << "Very Good!" << endl;
        break;
        case 'E':
            cout << "Very Good!" << endl;
        break;
        case 'F':
            cout << "Very Good!" << endl;
        break;
        
        default:
            cout << "Invalid grade entered." << endl;
    }

    // When C++ reaches a break keyword, it breaks out of the switch block.
    // The default keyword specifies some code to run if there is no case match.
    










    return 0;
}