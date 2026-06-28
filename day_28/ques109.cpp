// to create library management system.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of books: ";
    cin >> n;
    string title[n];
    string author[n];
    int year[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for book " << i + 1 << endl;
        cout << "Title: ";
        cin >> title[i];
        cout << "Author: ";
        cin >> author[i];
        cout << "Year of Publication: ";
        cin >> year[i];
    }

    cout << "\nLibrary Book List:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Book " << i + 1 << ": " << endl;
        cout << "Title: " << title[i] << endl;
        cout << "Author: " << author[i] << endl;
        cout << "Year of Publication: " << year[i] << endl;
    }

    return 0;
}