#include <iostream>
#include <string>

using namespace std;

// Global variables
string name, email, mobile, city;
int age;
double balance = 0;

// Function to register the user
void registerAccount() {
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your email: ";
    getline(cin, email);
    cout << "Enter your mobile number: ";
    getline(cin, mobile);
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();  // To clear the newline character from the input buffer
    cout << "Enter your city: ";
    getline(cin, city);

    cout << "\nRegistration successful!\n";
}

// Function to add credit
void addCredit() {
    string enteredMobile;
    double amount;

    cout << "\nPlease enter your mobile number: ";
    getline(cin, enteredMobile);

    if (enteredMobile == mobile) {
        cout << "Please enter the amount you want to credit: ";
        cin >> amount;
        balance += amount;
        cout << amount << " credited successfully. Your new balance is " << balance << endl;
    } else {
        cout << "User not registered.\n";
    }
}

// Function to withdraw money
void withdraw() {
    string enteredMobile;
    double amount;

    cout << "\nDo you want to make a transaction? (yes/no): ";
    string response;
    getline(cin, response);

    if (response == "yes") {
        cout << "Please enter your mobile number: ";
        getline(cin, enteredMobile);

        if (enteredMobile == mobile) {
            cout << "Enter the amount you want to withdraw: ";
            cin >> amount;

            if (amount <= balance) {
                balance -= amount;
                cout << amount << " withdrawn successfully. Your remaining balance is " << balance << endl;
            } else {
                cout << "Insufficient balance. Your current balance is " << balance << endl;
            }
        } else {
            cout << "User not registered.\n";
        }
    }
}

// Function to check balance
void checkBalance() {
    cout << "\nYour current balance is " << balance << endl;
}

int main() {
    int choice;
    do {
        cout << "\n--- Welcome to Our Banking Services ---\n";
        cout << "1. Register Your Account\n";
        cout << "2. Add Credit\n";
        cout << "3. Make a Transaction\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";
        cout << "Please choose an option (1-5): ";
        cin >> choice;
        cin.ignore();  // To clear the newline character from the input buffer

        switch (choice) {
            case 1:
                registerAccount();
                break;
            case 2:
                addCredit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                cout << "Thank you for using our services!\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}

