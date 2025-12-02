#include <iostream>
using namespace std;

int main() {
    double number1, number2;
    char op;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Select an operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result is: " << number1 + number2 << "\n";
            break;
        case '-':
            cout << "Result is: " << number1 - number2 << "\n";
            break;
        case '*':
            cout << "Result is: " << number1 * number2 << "\n";
            break;
        case '/':
            if(number2 != 0)
                cout << "Result is: " << number1 / number2 << "\n";
            else
                cout << "Error: Division by zero!\n";
            break;
        default:
            cout << "That is not a valid operator. Try again.\n";
            break;
    }

    return 0;
}
