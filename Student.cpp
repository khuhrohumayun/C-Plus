#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 100;
const int MAX_GRADES = 10;

struct Student {
    string name;
    double grades[MAX_GRADES];
    int numGrades;
};

Student students[MAX_STUDENTS];
int numStudents = 0;

void addStudent() {
    if (numStudents < MAX_STUDENTS) {
        cout << "Enter student name: ";
        cin >> students[numStudents].name;
        students[numStudents].numGrades = 0;
        numStudents++;
    } else {
        cout << "Maximum number of students reached!" << endl;
    }
}

void assignGrade() {
    string name;
    cout << "Enter student name: ";
    cin >> name;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].name == name) {
            if (students[i].numGrades < MAX_GRADES) {
                cout << "Enter grade: ";
                cin >> students[i].grades[students[i].numGrades];
                students[i].numGrades++;
            } else {
                cout << "Maximum number of grades reached for this student!" << endl;
            }
            return;
        }
    }
    cout << "Student not found!" << endl;
}

void calculateAverage() {
    string name;
    cout << "Enter student name: ";
    cin >> name;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].name == name) {
            double sum = 0;
            for (int j = 0; j < students[i].numGrades; j++) {
                sum += students[i].grades[j];
            }
            double average = sum / students[i].numGrades;
            cout << "Average grade for " << students[i].name << ": " << average << endl;
            return;
        }
    }
    cout << "Student not found!" << endl;
}

int main() {
	
		cout << "\t Here's a basic implementation of a Student Gradebook program in C++: \n";
	
    int choice;
    do {
        cout << "Student Gradebook" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Assign Grade" << endl;
        cout << "3. Calculate Average" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                assignGrade();
                break;
            case 3:
                calculateAverage();
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

