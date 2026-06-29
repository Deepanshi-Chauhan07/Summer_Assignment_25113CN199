//to create menu driven string operating system.
#include <iostream>
using namespace std;
int main()
{
    int choice, n;
    cout << "Enter the number of strings: ";
    cin >> n;
    string arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter string " << i + 1 << ": ";
        cin >> arr[i];
    }

    do
    {
        cout << "\nMenu-driven String Operations" << endl;
        cout << "1. Display Strings" << endl;
        cout << "2. Find Longest String" << endl;
        cout << "3. Find Shortest String" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Strings: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;
        case 2:
            {
                string longest = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i].length() > longest.length())
                        longest = arr[i];
                cout << "Longest String: " << longest << endl;
            }
            break;
        case 3:
            {
                string shortest = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i].length() < shortest.length())
                        shortest = arr[i];
                cout << "Shortest String: " << shortest << endl;
            }
            break;
        case 4:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}