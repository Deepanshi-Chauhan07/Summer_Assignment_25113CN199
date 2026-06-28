//to create bank account system.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of bank accounts: ";
    cin >> n;
    string account_holder[n];
    int account_number[n];
    float balance[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for account " << i + 1 << endl;
        cout << "Account Holder Name: ";
        cin >> account_holder[i];
        cout << "Account Number: ";
        cin >> account_number[i];
        cout << "Balance: ";
        cin >> balance[i];
    }

    cout << "\nBank Account Details:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Account " << i + 1 << ": " << endl;
        cout << "Account Holder Name: " << account_holder[i] << endl;
        cout << "Account Number: " << account_number[i] << endl;
        cout << "Balance: $" << balance[i] << endl;
    }

    return 0;
}