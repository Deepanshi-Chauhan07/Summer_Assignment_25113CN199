//to create inventory management system.
#include <iostream>
#include <string>
using namespace std;

struct Product
{
    int id;
    string name;
    int quantity;
    double price;
};

int main()
{
    int choice, n;
    cout << "Enter the number of products: ";
    cin >> n;
    Product inventory[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for product " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> inventory[i].id;
        cout << "Name: ";
        cin >> inventory[i].name;
        cout << "Quantity: ";
        cin >> inventory[i].quantity;
        cout << "Price: ";
        cin >> inventory[i].price;
    }

    do
    {
        cout << "\nInventory Management System" << endl;
        cout << "1. Display Inventory" << endl;
        cout << "2. Add Product" << endl;
        cout << "3. Update Product" << endl;
        cout << "4. Delete Product" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nInventory:" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << "ID: " << inventory[i].id << ", Name: " << inventory[i].name
                     << ", Quantity: " << inventory[i].quantity << ", Price: $" << inventory[i].price << endl;
            }
            break;
        case 2:
            if (n < 100) // Assuming a maximum capacity of 100 products
            {
                cout << "Enter details for the new product:" << endl;
                cout << "ID: ";
                cin >> inventory[n].id;
                cout << "Name: ";
                cin >> inventory[n].name;
                cout << "Quantity: ";
                cin >> inventory[n].quantity;
                cout << "Price: ";
                cin >> inventory[n].price;
                n++;
                cout << "Product added successfully." << endl;
            }
            else
            {
                cout << "Inventory is full. Cannot add more products." << endl;
            }
            break;
        case 3:
            int idToUpdate, found = 0;
            cout << "Enter the ID of the product to update: ";
            cin >> idToUpdate;

            for (int i = 0; i < n; i++)
            {
                if (inventory[i].id == idToUpdate)
                {
                    found = 1;
                    cout<< "Enter new details for the product:"<<endl ;
                    cout<< "Name: "<<endl ;
                    cin>>inventory[i].name ;
                    cout<< "Quantity: "<<endl ;
                    cin>>inventory[i].quantity ;
                    cout<<("Price: ") ;
                    cin>>inventory[i].price ;
                    break ;
                }
            }
            if (!found)
            {
               	cout<<"Product not found."<<endl ;
			}
			break ;
		case 4 :
			int idToDelete , found = 0 ;
			cout<<"Enter the ID of the product to delete : "<<endl ;
			cin>>idToDelete ;

			for(int i = 0 ; i < n ; i++)
			{
				if(inventory[i].id == idToDelete)
				{
					found = 1 ;
					for(int j = i ; j < n - 1 ; j++)
					{
						inventory[j] = inventory[j + 1] ;
					}
					n-- ;
					cout<<"Product deleted successfully."<<endl ;
					break ;
				}
			}
			if(!found)
			{
				cout<<"Product not found."<<endl ;
			}
			break ;
		case 5 :
			cout<<"Exiting the program."<<endl ;
			break ;
		default :
			cout<<"Invalid choice! Please try again."<<endl ;
		}

	} while(choice != 5) ;

	return 0 ;

}