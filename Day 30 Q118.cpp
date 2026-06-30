#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Book {
private:
    string title;
    string author;
    string id;

public:
   
    Book(string t, string a, string i) {
        title = t;
        author = a;
        id = i;
    }

   
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getID() const { return id; }

   
    void displayBook() const {
        cout << "ID: " << id << " | Title: " << title << " | Author: " << author << endl;
    }
};


class Library {
private:
    vector<Book> books; 

public:
   
    void addBook() {
        string title, author, id;
        
        cout << "\nEnter Book Title: ";
        cin.ignore();
        getline(cin, title);
        
        cout << "Enter Author Name: ";
        getline(cin, author);
        
        cout << "Enter Book ID: ";
        getline(cin, id);

       
        books.push_back(Book(title, author, id));
        cout << "Book added successfully!\n";
    }

   
    void displayAllBooks() const {
        if (books.empty()) {
            cout << "\nNo books in the library.\n";
            return;
        }

        cout << "\n--- Library Catalog ---\n";
        for (const auto& book : books) {
            book.displayBook();
        }
    }

   
    void searchBook() const {
        if (books.empty()) {
            cout << "\nNo books in the library to search.\n";
            return;
        }

        string searchTitle;
        cout << "\nEnter Book Title to Search: ";
        cin.ignore();
        getline(cin, searchTitle);

        bool found = false;
        for (const auto& book : books) {
            
            if (book.getTitle() == searchTitle) {
                cout << "\nBook Found:\n";
                book.displayBook();
                found = true;
            }
        }

        if (!found) {
            cout << "\nBook not found.\n";
        }
    }
};

int main() {
    Library myLibrary;
    int choice;

    do {
        cout << "\n===== MINI LIBRARY SYSTEM =====";
        cout << "\n1. Add a Book";
        cout << "\n2. Display All Books";
        cout << "\n3. Search for a Book";
        cout << "\n4. Exit";
        cout << "\nEnter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                myLibrary.addBook();
                break;
            case 2:
                myLibrary.displayAllBooks();
                break;
            case 3:
                myLibrary.searchBook();
                break;
            case 4:
                cout << "\nExiting system. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please enter a number between 1 and 4.\n";
        }
    } while (choice != 4);

    return 0;
}
