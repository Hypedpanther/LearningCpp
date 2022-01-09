#include <iostream>
using namespace std;
//Comment

/* This is a
multi-line Comment*/

/* The general rules for naming variables are:
Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (like C++ keywords, such as int) cannot be used as names */

int main(){
  string x = "Hello World ", y = "I am learning C++";
  int myNum = 5;               // Integer (whole number without decimals)
  double myFloatNum = 5.99;    // Floating point number (with decimals)
  char myLetter = 'D';         // Character
  string myText = "Hello";     // String (text)
  bool myBoolean = true;       // Boolean (true or false)
  const int minutesPerHour = 60;  // minutesPerHour will always be 60
  cout << "Test \n" + x + "\n" + y << endl; // Display the variable values
  cout << "Type a number: "; // Type a number and press enter
  cin >> myNum; // Get user input from the keyboard
  cout << "Your number is: " << myNum << endl; // Display the input value
  double d1 = 12e4; /*A floating point number can also be a scientific
  number with an "e" or "E" to indicate the power of 10: */
  cout << d1;
  return 0;
} dfgs
