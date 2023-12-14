#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error! Division by zero is not allowed." << endl;
                return 0;
            }
            break;
        default:
            cout << "Error! Invalid operation." << endl;
            return 0;
    }

    cout << "The result of " << num1 << " " << operation << " " << num2 << " is " << result << endl;

    return 0;
}