#include <iostream>
using namespace std;

// Driver Code
int main()
{
    cout << "Welcome to the Simple Calculator Task!\n"<< endl;
    

    char op;           // operator
    float num1, num2;   // two input numbers
    char ch;

    while(1)
    {
        cout << "Enter two operands :: ";
        cin >> num1 >> num2;

        cout << "Enter operator :: ( + , - , * , / )" << " : ";
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
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
        }

        cout << "\nIf you want to exit press 'o', else for continue press any key. :: ";
        cin >> ch;
        cout << endl;
        if(ch == 'o')
        {
            break;
        }
    }

    return 0;
}
