//to create mini library system.
#include <iostream>
#include <string>
using namespace std;
struct Book
{
    int id;
    string title;
    string author;
    int quantity;
};
int main()
{
    int choice, n;
    cout << "Enter the number of books: ";
    cin >> n;
    Book library[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for book " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> library[i].id;
        cout << "Title: ";
        cin >> library[i].title;
        cout << "Author: ";
        cin >> library[i].author;
        cout << "Quantity: ";
        cin >> library[i].quantity;
    }

    do
    {
        cout << "\nLibrary Management System" << endl;
        cout << "1. Display Library" << endl;
        cout << "2. Add Book" << endl;
        cout << "3. Update Book" << endl;
        cout << "4. Delete Book" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    }
    while (choice != 5);
    return 0;
}