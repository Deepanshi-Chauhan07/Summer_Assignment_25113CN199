//to create ticket booking system.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of tickets to book: ";
    cin >> n;
    string passenger_name[n];
    int ticket_number[n];
    string destination[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for ticket " << i + 1 << endl;
        cout << "Passenger Name: ";
        cin >> passenger_name[i];
        cout << "Ticket Number: ";
        cin >> ticket_number[i];
        cout << "Destination: ";
        cin >> destination[i];
    }

    cout << "\nTicket Booking Details:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Ticket " << i + 1 << ": " << endl;
        cout << "Passenger Name: " << passenger_name[i] << endl;
        cout << "Ticket Number: " << ticket_number[i] << endl;
        cout << "Destination: " << destination[i] << endl;
    }

    return 0;
}