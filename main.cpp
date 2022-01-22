#include <iostream> // include the iostream library
#include <string> // include the string library
#include <cmath> // include the math library
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
  // C++ Variables
  string x = "Hello World ", y = "I am learning C++"; //string(text)
  int myNum = 5;               // Integer (whole number without decimals)
  string fullstatement = x.append(y); // Concatenate the strings
  int myNum2 = 5 + myNum;     // Addition
  double myFloatNum = 5.99;    // Floating point number (with decimals) best for 15 decimal points
  float myFloatNum2 = 5.99;    // Floating point number (with decimals) best for 7 decimal points
  char myLetter = 'D';         // Character     
  bool myBoolean = true;       // Boolean (true or false)
  const int minutesPerHour = 60;  // minutesPerHour will always be 60
  double d1 = 12e4; /*A floating point number can also be a scientific
  number with an "e" or "E" to indicate the power of 10: */

  // C++ Operators, Output, Input
  cout << "Test \n" + x + "\n" + y << endl; // Display the variable values
  cout << fullstatement << endl; // Display the concatenated string
  cout << "the length of the fullstatement is " << fullstatement.length() << endl; /* Display the length of the string 
  you can also use variable.size()*/
  x[0]= 'W'; // Change the first letter of the string to W
  cout << x << endl; // Display the string
  cout << "the first character of the fullstatement is " << fullstatement[0] << endl; // Display the first character of the string
  cout << "myNum + 5 = "<< myNum2 << endl;     // Prints 10
  ++myNum;                     // Increment myNum by 1
  --myNum;                     // Decrement myNum by 1
  cout << "Type a number: "; // Type a number and press enter
  cin >> myNum; // Get user input from the keyboard
  cout << "Your number is: " << myNum << endl; // Display the input value
  cout << d1;
  cout << max(myNum, myNum2) << endl; // Display the larger of the two numbers
  cout << min(myNum, myNum2) << endl; // Display the smaller of the two numbers
  cout << sqrt(64)<< endl; // Display the square root of 64
  cout << pow(2, 3)<< endl; // Display the power of 2 to the power of 3
  cout << round(3.4)<< endl; // Display the rounded value of 3.4
  cout << log(2)<< endl; // Display the logarithm of 2

  // using getline function to read a line of text from the keyboard
  string fullName;
  cout << "Enter your full name: "<< endl;
  cin.ignore(); // ignore the newline character 
  getline (cin, fullName);
  cout << "Your full name is: " << fullName << endl;
  return 0;
  // C++ conditions
  if (myNum > myNum2) {
    cout << "myNum is greater than myNum2" << endl;
  } else if (myNum < myNum2) {
    cout << "myNum is less than myNum2" << endl;
  } else {
    cout << "myNum is equal to myNum2" << endl;
  }
  
  // if else shorthand
  string result = (myNum > myNum2) ? "myNum is greater than myNum2" : "myNum is less than myNum2";
} 
