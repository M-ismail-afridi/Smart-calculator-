// Smart Calculator in C++
// By Muhammad Ismail Khan Afridi

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    
    cout << "=== Smart Calculator (C++) ===" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 == 0) {
                cout << "Error: Cannot divide by zero!" << endl;
            } else {
                cout << "Result: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
    }
    return 0;
}