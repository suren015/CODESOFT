#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Simple Calculator Task!\n"
         << endl;

    char op;           // Variable to store the operator
    double num1, num2; // Variables to store two input numbers
    char ch;           // Variable to handle user's choice for continuation

    while (true)
    {
        cout << "Enter two operands :: ";
        cin >> num1 >> num2;

        cout << "Enter operator :: ( + , - , * , / ) : ";
        cin >> op;

        switch (op)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;

        case '/':
            // Check for division by zero
            if (num2 != 0)
            {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            else
            {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;

        default:
            // If the operator is other than +, -, * or /, display an error message
            cout << "Error! Operator is not correct." << endl;
            break;
        }

        cout << "\nIf you want to exit, press 'o'; otherwise, press any other key to continue: ";
        cin >> ch;
        cout << endl;

        if (ch == 'o')
        {
            break; // Exit the calculator loop if 'o' is entered.
        }
    }

    return 0;
}
