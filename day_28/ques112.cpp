//to create contact management system.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of contacts: ";
    cin >> n;
    string name[n];
    string phone_number[n];
    string email[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for contact " << i + 1 << endl;
        cout << "Name: ";
        cin >> name[i];
        cout << "Phone Number: ";
        cin >> phone_number[i];
        cout << "Email: ";
        cin >> email[i];
    }

    cout << "\nContact List:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Contact " << i + 1 << ": " << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Phone Number: " << phone_number[i] << endl;
        cout << "Email: " << email[i] << endl;
    }

    return 0;
}