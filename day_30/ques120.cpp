//to develop complete mini project using arrays ,strings and functions.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int MAX_STUDENTS = 100;

void displayMenu();
void addStudent(string names[], int rolls[], float gpas[], int& currentCount);
void viewStudents(const string names[], const int rolls[], const float gpas[], int currentCount);
void searchStudent(const string names[], const int rolls[], const float gpas[], int currentCount);
void calculateAverageGpa(const float gpas[], int currentCount);

int main() {
    // Arrays to store student data
    string studentNames[MAX_STUDENTS];
    int rollNumbers[MAX_STUDENTS];
    float studentGpas[MAX_STUDENTS];
    
    int studentCount = 0; 
    int choice;

    cout << "=========================================\n";
    cout << "   WELCOME TO THE STUDENT DATABASE SYSTEM\n";
    cout << "=========================================\n";

    do {
        displayMenu();
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        cin.ignore(); 

        switch (choice) {
            case 1:
                addStudent(studentNames, rollNumbers, studentGpas, studentCount);
                break;
            case 2:
                viewStudents(studentNames, rollNumbers, studentGpas, studentCount);
                break;
            case 3:
                searchStudent(studentNames, rollNumbers, studentGpas, studentCount);
                break;
            case 4:
                calculateAverageGpa(studentGpas, studentCount);
                break;
            case 5:
                cout << "\nExiting program. Thank you!\n";
                break;
            default:
                cout << "\nInvalid choice! Please select an option between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}

void displayMenu() {
    cout << "\n--- MAIN MENU ---\n";
    cout << "1. Add New Student\n";
    cout << "2. View All Students\n";
    cout << "3. Search Student by Roll Number\n";
    cout << "4. Calculate Class Average GPA\n";
    cout << "5. Exit\n";
    cout << "-----------------\n";
}

// Function to add a student record to parallel arrays
void addStudent(string names[], int rolls[], float gpas[], int& currentCount) {
    if (currentCount >= MAX_STUDENTS) {
        cout << "\nDatabase is full! Cannot add more students.\n";
        return;
    }

    cout << "\nEnter student's full name: ";
    getline(cin, names[currentCount]);

    cout << "Enter roll number: ";
    cin >> rolls[currentCount];

    cout << "Enter GPA (0.0 - 4.0): ";
    cin >> gpas[currentCount];

    currentCount++; 
    cout << "\nRecord added successfully!\n";
}

// Function to display all entries in tabular format
void viewStudents(const string names[], const int rolls[], const float gpas[], int currentCount) {
    if (currentCount == 0) {
        cout << "\nNo records found in the database.\n";
        return;
    }

    cout << "\n" << left << setw(15) << "Roll No" 
         << setw(30) << "Name" 
         << setw(10) << "GPA" << endl;
    cout << string(55, '-') << endl;

    for (int i = 0; i < currentCount; i++) {
        cout << left << setw(15) << rolls[i] 
             << setw(30) << names[i] 
             << fixed << setprecision(2) << setw(10) << gpas[i] << endl;
    }
}

// Function to search for a student using sequential/linear search
void searchStudent(const string names[], const int rolls[], const float gpas[], int currentCount) {
    if (currentCount == 0) {
        cout << "\nNo records available to search.\n";
        return;
    }

    int targetRoll;
    cout << "\nEnter the roll number to search: ";
    cin >> targetRoll;

    for (int i = 0; i < currentCount; i++) {
        if (rolls[i] == targetRoll) {
            cout << "\nStudent Found!";
            cout << "\nName: " << names[i];
            cout << "\nRoll Number: " << rolls[i];
            cout << "\nGPA: " << fixed << setprecision(2) << gpas[i] << endl;
            return; // Exit function immediately once found
        }
    }
    cout << "\nStudent with Roll Number " << targetRoll << " not found.\n";
}

// Function to calculate and display the statistical average math operation
void calculateAverageGpa(const float gpas[], int currentCount) {
    if (currentCount == 0) {
        cout << "\nNo data available to calculate average.\n";
        return;
    }

    float sum = 0;
    for (int i = 0; i < currentCount; i++) {
        sum += gpas[i];
    }

    float average = sum / currentCount;
    cout << "\nTotal Students: " << currentCount;
    cout << "\nClass Average GPA: " << fixed << setprecision(2) << average << endl;
}
   
  
