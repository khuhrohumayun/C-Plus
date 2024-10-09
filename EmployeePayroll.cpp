#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Employee {
    string name;
    double hourlyWage;
    double hoursWorked;
};

vector<Employee> employees;

void addEmployee() {
    Employee newEmployee;
    cout << "Enter employee name: ";
    cin >> newEmployee.name;
    cout << "Enter hourly wage: ";
    cin >> newEmployee.hourlyWage;
    employees.push_back(newEmployee);
}

void trackHours() {
    string name;
    cout << "Enter employee name: ";
    cin >> name;
    for (Employee &emp : employees) {
        if (emp.name == name) {
            cout << "Enter hours worked: ";
            cin >> emp.hoursWorked;
            return;
        }
    }
    cout << "Employee not found!" << endl;
}

void generatePayStub() {
    string name;
    cout << "Enter employee name: ";
    cin >> name;
    for (const Employee &emp : employees) {
        if (emp.name == name) {
            double pay = emp.hourlyWage * emp.hoursWorked;
            cout << "Pay Stub for " << emp.name << endl;
            cout << "Hours Worked: " << emp.hoursWorked << endl;
            cout << "Pay: $" << pay << endl;
            return;
        }
    }
    cout << "Employee not found!" << endl;
}

int main() {
	

	cout << "\tHere's a basic implementation of an Employee Payroll System in C++: \n";
    int choice;
    do {
        cout << "Employee Payroll System" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Track Hours" << endl;
        cout << "3. Generate Pay Stub" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                trackHours();
                break;
            case 3:
                generatePayStub();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}

