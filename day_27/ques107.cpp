// to create salary management system.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    float salary[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter salary for employee " << i + 1 << ": ";
        cin >> salary[i];
    }

    cout << "\nEmployee Salaries:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Employee " << i + 1 << ": $" << salary[i] << endl;
    }

    return 0;
}