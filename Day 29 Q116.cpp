#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;


struct Item {
    int id;
    string name;
    int quantity;
    double price;
};


void addItem(vector<Item> &inventory);
void viewInventory(const vector<Item> &inventory);
void updateStock(vector<Item> &inventory);
void searchItem(const vector<Item> &inventory);

int main() {
    vector<Item> inventory;
    int choice;

    // Menu loop
    do {
        cout << "\n===================================";
        cout << "\n    INVENTORY MANAGEMENT SYSTEM    ";
        cout << "\n===================================";
        cout << "\n1. Add New Item";
        cout << "\n2. View All Items";
        cout << "\n3. Update Stock Quantity";
        cout << "\n4. Search Product by ID";
        cout << "\n5. Exit";
        cout << "\n===================================";
        cout << "\nEnter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addItem(inventory);
                break;
            case 2:
                viewInventory(inventory);
                break;
            case 3:
                updateStock(inventory);
                break;
            case 4:
                searchItem(inventory);
                break;
            case 5:
                cout << "\nExiting system. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}


void addItem(vector<Item> &inventory) {
    Item newItem;
    
    cout << "\nEnter Item ID (Integer): ";
    cin >> newItem.id;
    
    
    cin.ignore(); 
    cout << "Enter Item Name: ";
    getline(cin, newItem.name);
    
    cout << "Enter Quantity: ";
    cin >> newItem.quantity;
    
    cout << "Enter Price per Unit: ";
    cin >> newItem.price;

    inventory.push_back(newItem);
    cout << "\nItem added successfully!\n";
}


void viewInventory(const vector<Item> &inventory) {
    if (inventory.empty()) {
        cout << "\nInventory is currently empty.\n";
        return;
    }

    cout << "\n---------------------------------------------------------";
    cout << "\n" << left << setw(10) << "ID" 
         << setw(25) << "Name" 
         << setw(12) << "Quantity" 
         << "Price ($)";
    cout << "\n---------------------------------------------------------";
    
    for (const auto &item : inventory) {
        cout << "\n" << left << setw(10) << item.id 
             << setw(25) << item.name 
             << setw(12) << item.quantity 
             << fixed << setprecision(2) << item.price;
    }
    cout << "\n---------------------------------------------------------\n";
}


void updateStock(vector<Item> &inventory) {
    if (inventory.empty()) {
        cout << "\nInventory is empty. Nothing to update.\n";
        return;
    }

    int searchId;
    cout << "\nEnter Item ID to update stock: ";
    cin >> searchId;

    for (auto &item : inventory) {
        if (item.id == searchId) {
            cout << "Current quantity for " << item.name << " is: " << item.quantity << endl;
            cout << "Enter new quantity: ";
            cin >> item.quantity;
            cout << "\nStock updated successfully!\n";
            return;
        }
    }
    cout << "\nItem ID not found!\n";
}


void searchItem(const vector<Item> &inventory) {
    if (inventory.empty()) {
        cout << "\nInventory is empty.\n";
        return;
    }

    int searchId;
    cout << "\nEnter Item ID to search: ";
    cin >> searchId;

    for (const auto &item : inventory) {
        if (item.id == searchId) {
            cout << "\n--- Item Found ---";
            cout << "\nID: " << item.id;
            cout << "\nName: " << item.name;
            cout << "\nQuantity: " << item.quantity;
            cout << "\nPrice: $" << fixed << setprecision(2) << item.price << "\n";
            return;
        }
    }
    cout << "\nItem ID not found!\n";
}
