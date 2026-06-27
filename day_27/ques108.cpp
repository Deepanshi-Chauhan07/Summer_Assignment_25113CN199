//to create marksheet generation system.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    string name[n];
    int roll_no[n];
    float marks[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for student " << i + 1 << endl;
        cout << "Name: ";
        cin >> name[i];
        cout << "Roll Number: ";
        cin >> roll_no[i];
        cout << "Marks: ";
        cin >> marks[i];
    }

    cout << "\nStudent Marksheet:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ": " << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Roll Number: " << roll_no[i] << endl;
        cout << "Marks: " << marks[i] << endl;
    }

    return 0;
}