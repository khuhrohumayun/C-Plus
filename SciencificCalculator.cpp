#include <iostream>
#include <cmath>   // For math functions like sin, cos, log

using namespace std;

int main() {
    double num1, num2;
    char operation;
    bool continueCalculation = true;

    while (continueCalculation) {
        cout << "Enter the operation (+, -, *, /, s (sin), c (cos), t (tan), l (log), e (exp), q (square root)): ";
        cin >> operation;

        switch(operation) {
            case '+':
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;

            case '-':
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;

            case '*':
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;

            case '/':
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;

            case 's':   // Sine
                cout << "Enter an angle in radians: ";
                cin >> num1;
                cout << "Result: " << sin(num1) << endl;
                break;

            case 'c':   // Cosine
                cout << "Enter an angle in radians: ";
                cin >> num1;
                cout << "Result: " << cos(num1) << endl;
                break;

            case 't':   // Tangent
                cout << "Enter an angle in radians: ";
                cin >> num1;
                cout << "Result: " << tan(num1) << endl;
                break;

            case 'l':   // Natural Logarithm
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 > 0)
                    cout << "Result: " << log(num1) << endl;
                else
                    cout << "Error: Logarithm of non-positive number!" << endl;
                break;

            case 'e':   // Exponential
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << exp(num1) << endl;
                break;

            case 'q':   // Square Root
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 >= 0)
                    cout << "Result: " << sqrt(num1) << endl;
                else
                    cout << "Error: Square root of a negative number!" << endl;
                break;

            default:
                cout << "Error: Invalid operation!" << endl;
        }

        char choice;
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y') {
            continueCalculation = false;
        }
    }

    cout << "Calculator has exited." << endl;

    return 0;
}

