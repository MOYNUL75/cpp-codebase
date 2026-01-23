#include <iostream>
using namespace std;

int main(){
    // Input and Output in C++
    // cout is used for output (console output), and uses the insertion operator (<<)
    // cin is used for input (console input), and uses the extraction operator (>>)

    // Example: Output a message
    cout << "Enter your name: ";

    // Declare a string variable to store input
    string userName;

    // Use cin to read input from the user
    cin >> userName;

    // Output the input back to the user
    cout << "Hello, " << userName << "! Welcome to C++ programming." << endl;

    // Example with numbers
    cout << "Enter your age: ";
    int userAge;
    cin >> userAge;
    cout << "You are " << userAge << " years old." << endl;

    // Note: cin stops reading at whitespace, use getline for full lines
    cout << "Enter a full sentence: ";
    string fullSentence;
    cin.ignore(); // Ignore leftover newline from previous cin
    getline(cin, fullSentence);
    cout << "You entered: " << fullSentence << endl;

    return 0;
}
