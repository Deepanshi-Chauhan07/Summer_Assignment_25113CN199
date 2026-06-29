//to create menu driven array operating system
#include <iostream>
using namespace std;
int main()
{
    int choice, n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    do
    {
        cout << "\nMenu-driven Array Operations" << endl;
        cout << "1. Display Array" << endl;
        cout << "2. Find Maximum Element" << endl;
        cout << "3. Find Minimum Element" << endl;
        cout << "4. Calculate Sum of Elements" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Array Elements: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;
        case 2:
            {
                int max = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i] > max)
                        max = arr[i];
                cout << "Maximum Element: " << max << endl;
            }
            break;
        case 3:
            {
                int min = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i] < min)
                        min = arr[i];
                cout << "Minimum Element: " << min << endl;
            }
            break;
        case 4:
            {
                int sum = 0;
                for (int i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum of Elements: " << sum << endl;
            }
            break;
        case 5:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}