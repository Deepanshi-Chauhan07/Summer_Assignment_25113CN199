// to create student record management system
#include <bits/stdc++.h>
using namespace std;
struct Student {
    string name;
    int age;
    string grade;
};
int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "Student Record Management System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Student student;
                cout << "Enter name: ";
                cin >> student.name;
                cout << "Enter age: ";
                cin >> student.age;
                cout << "Enter grade: ";
                cin >> student.grade;
                students.push_back(student);
                break;
            }
            case 2: {
                cout << "Student Records:" << endl;
                for (const auto& student : students) {
                    cout << "Name: " << student.name 
                         << ", Age: " << student.age 
                         << ", Grade: " << student.grade << endl;
                }
                break;
            }
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}