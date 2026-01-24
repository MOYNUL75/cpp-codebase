#include <iostream>
#include <string>  // include the string library
using namespace std;

int main(){

    // Declare and initialize a string variable
    string greeting = "Hello, World!";
    cout << greeting << endl;

    // Concatenate strings
    string name = "Alice";
    string personalizedGreeting = greeting + " My name is " + name + ".";
    cout << personalizedGreeting << endl;

    // Get the length of a string
    cout << "The length of the greeting is: " << greeting.length() << endl;

    //Append to a string
    greeting.append(" How are you?");
    cout << greeting << endl;

    name.append(" : I am well, thank you!");
    cout<< name << endl;

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;
    cout << "The length of the txt string is: " << txt.size() << endl;

    // Access Strings 
    string sample = "Hello";

    cout << "The first character of Hello is: " << sample[0] << endl;
    cout << "The fourth character of Hello is: " << greeting[3] << endl;
    cout << "The last character of Hello is: " << sample[sample.length() - 1] << endl;   
  
    // Modify Strings
    sample[0] = 'h'; // Change 'H' to 'h'
    cout << "Modified string: " << sample << endl;

    // The at() function : The <string> library also has an at() function that can be used to access characters in a string.
    cout << "The first character using at(): " << sample.at(0) << endl;
    sample.at(1) = 'a'; // Change 'e' to 'a'
    cout << "Modified string using at(): " << sample << endl;

    // Strings - Special Characters
    string specialChars = "First Line\nSecond Line\n\tTabbed Line\n\'Single Quoted Text\'\n\"Double Quoted Text\"\nBackslash: \\";
    cout << specialChars << endl;

    // Strings - Multiline Strings
    string multiLine = "This is line one.\n" 
                       "This is line two.\n"
                       "This is line three.";
    cout << multiLine << endl;

    // Strings - Raw String Literals
    string rawString = R"(This is a raw string literal. It can span multiple lines
and include special characters like \n, \t, and quotes " ' without needing escape sequences.)";
    cout << rawString << endl; 
    
    // Strings - String Comparison
    string str1 = "Apple";
    string str2 = "Banana";
    if (str1 == str2) {
        cout << str1 << " is equal to " << str2 << endl;
    } else if (str1 < str2) {
        cout << str1 << " is less than " << str2 << endl;
    } else {
        cout << str1 << " is greater than " << str2 << endl;
    }

    // Strings - Substrings
    string fullString = "Hello, welcome to the world of C++ programming.";
    string subString = fullString.substr(7, 7); // Extract "welcome"
    cout << "Extracted substring: " << subString << endl;

    // User Input Strings 
    string firstname;
    cout << "Enter your first name: ";
    cin >> firstname; // Note: This will read input until the first whitespace
    cout << "Hello, " << firstname << "!" << endl;
    cin.ignore(); // Clear the newline character from the input buffer
    
    // However, cin considers a space as the end of input. 
    // To read a full line including spaces, use getline:

    string fullname;
    cout << "Enter your fullname : ";
    getline(cin, fullname); // Use getline to allow spaces in input
    cout << "Your favorite quote is: " << fullname << endl;

    return 0;
}