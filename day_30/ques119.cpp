//to create mini employee management system.
#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
    float salary;
};

int main()
{
    int choice, n;
    cout << "Enter the number of employees: ";
    cin >> n;
    Employee company[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for employee " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> company[i].id;
        cout << "Name: ";
        cin >> company[i].name;
        cout << "Department: ";
        cin >> company[i].department;
        cout << "Salary: ";
        cin >> company[i].salary;
    }

    do
    {
        cout << "\nEmployee Management System" << endl;
        cout << "1. Display Employees" << endl;
        cout << "2. Add Employee" << endl;
        cout << "3. Update Employee" << endl;
        cout << "4. Delete Employee" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    }
    while (choice != 5);
    return 0;
}