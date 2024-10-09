#include <iostream>
#include <string>

// Function prototypes
void displayMenu();
void withdraw(int amount);
void deposit(int amount);
void checkBalance();
void printBills(int amount);

// Password authentication
std::string password = "1234"; // Set your password here
bool isAuthenticated = false;

int main() {
    int choice, amount;
    std::string userInput;

    // Password authentication
    while (!isAuthenticated) {
        std::cout << "Enter your password: ";
        std::cin >> userInput;
        if (userInput == password) {
            std::cout << "Correct password! Welcome to the ATM." << std::endl;
            isAuthenticated = true;
        } else {
            std::cout << "Incorrect password. Please try again." << std::endl;
        }
    }

    do {
        displayMenu();
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Enter amount to withdraw: ";
                std::cin >> amount;
                withdraw(amount);
                break;
            case 2:
                std::cout << "Enter amount to deposit: ";
                std::cin >> amount;
                deposit(amount);
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please choose again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}

// Function definitions
void displayMenu() {
    std::cout << "ATM Menu:" << std::endl;
    std::cout << "1. Withdraw" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Check Balance" << std::endl;
    std::cout << "4. Exit" << std::endl;
}

void withdraw(int amount) {
    // Withdraw logic here
    printBills(amount);
}

void deposit(int amount) {
    // Deposit logic here
}

void checkBalance() {
    // Check balance logic here
}

void printBills(int amount) {
    // Print bills logic here
    // You can call 5 different functions to print different bill denominations
}

