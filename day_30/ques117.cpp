//to create student record system using arrays and strings.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    string names[n];
    int rollNumbers[n];
    float marks[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> names[i];
        cout << "Roll Number: ";
        cin >> rollNumbers[i];
        cout << "Marks: ";
        cin >> marks[i];
    }

    cout << "\nStudent Records:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << names[i] << ", Roll Number: " << rollNumbers[i] << ", Marks: " << marks[i] << endl;
    }

    return 0;
}