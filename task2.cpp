/*Develop a calculator program that performs basic arithmetic operations such as addition, subtraction,
multiplication, and division. Allow the user to input two numbers and choose an operation to perform.*/
#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Enter first number: "; cin >> num1;
    cout << "Enter second number: "; cin >> num2;
    cout << "Enter operation (+, -, *, /): "; cin >> operation;

    switch (operation) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            result = (num2 != 0) ? num1 / num2 : 0;
            if (num2 == 0) cout << "Error: Division by zero!\n";
            break;
        default:
            cout << "Invalid operation entered.\n";
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
