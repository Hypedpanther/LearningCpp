#include <iostream>
using namespace std;

// This is a simple calculator program.
int main()
{
    int num1, num2;
    char op;
    cout << "Enter two numbers and an operator: ";
    cin >> num1 >> op >> num2;
    if (op == '+')
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    else if (op == '-')
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    else if (op == '*')
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    else if (op == '/')
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    else
        cout << "Invalid operator" << endl;
    
    return 0;
}
