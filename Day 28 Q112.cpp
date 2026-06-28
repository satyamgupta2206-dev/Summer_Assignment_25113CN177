#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


class Contact {
private:
    string name;
    string phone;
    string email;

public:
  
    Contact(string n, string p, string e) : name(n), phone(p), email(e) {}

   
    string getName() const { return name; }
    string getPhone() const { return phone; }
    string getEmail() const { return email; }

   
    void displayContact() const {
        cout << "Name : " << name << "\n";
        cout << "Phone: " << phone << "\n";
        cout << "Email: " << email << "\n";
        cout << "-----------------------\n";
    }
};


class ContactManager {
private:
    vector<Contact> contacts;

public:
   
    void addContact() {
        string name, phone, email;
        cout << "\nEnter Name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter Phone Number: ";
        getline(cin, phone);
        cout << "Enter Email Address: ";
        getline(cin, email);

        contacts.push_back(Contact(name, phone, email));
        cout << "\nContact added successfully!\n";
    }

    
    void viewAllContacts() const {
        if (contacts.empty()) {
            cout << "\nNo contacts found. Your list is empty.\n";
            return;
        }
        cout << "\n=== All Contacts ===\n";
        for (const auto& contact : contacts) {
            contact.displayContact();
        }
    }

  
    void searchContact() const {
        if (contacts.empty()) {
            cout << "\nNo contacts available to search.\n";
            return;
        }
        string searchName;
        cout << "\nEnter the name to search: ";
        cin.ignore();
        getline(cin, searchName);

        bool found = false;
        cout << "\n--- Search Results ---\n";
        for (const auto& contact : contacts) {
           
            if (contact.getName().find(searchName) != string::npos) {
                contact.displayContact();
                found = true;
            }
        }
        if (!found) {
            cout << "No contact found with the name '" << searchName << "'.\n";
        }
    }

   
    void deleteContact() {
        if (contacts.empty()) {
            cout << "\nNo contacts available to delete.\n";
            return;
        }
        string deleteName;
        cout << "\nEnter the exact name of the contact to delete: ";
        cin.ignore();
        getline(cin, deleteName);

        auto it = remove_if(contacts.begin(), contacts.end(), [&](const Contact& c) {
            return c.getName() == deleteName;
        });

        if (it != contacts.end()) {
            contacts.erase(it, contacts.end());
            cout << "\nContact deleted successfully!\n";
        } else {
            cout << "\nContact not found.\n";
        }
    }
};


int main() {
    ContactManager manager;
    int choice;

    while (true) {
        cout << "\n*** Contact Management System ***\n";
        cout << "1. Add Contact\n";
        cout << "2. View All Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                manager.addContact();
                break;
            case 2:
                manager.viewAllContacts();
                break;
            case 3:
                manager.searchContact();
                break;
            case 4:
                manager.deleteContact();
                break;
            case 5:
                cout << "\nExiting application. Goodbye!\n";
                return 0;
            default:
                cout << "\nInvalid choice! Please select between 1 and 5.\n";
        }
    }
    return 0;
}
