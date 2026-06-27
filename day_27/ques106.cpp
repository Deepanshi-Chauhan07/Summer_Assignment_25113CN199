// to create emoloyee record management system.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    string name[n];
    int id[n];
    float salary[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for employee " << i + 1 << endl;
        cout << "Name: ";
        cin >> name[i];
        cout << "ID: ";
        cin >> id[i];
        cout << "Salary: ";
        cin >> salary[i];
    }

    cout << "\nEmployee Records:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Employee " << i + 1 << ": " << endl;
        cout << "Name: " << name[i] << endl;
        cout << "ID: " << id[i] << endl;
        cout << "Salary: $" << salary[i] << endl;
    }

    return 0;
}

