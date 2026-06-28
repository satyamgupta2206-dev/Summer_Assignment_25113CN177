#include <iostream>
#include <vector>
#include <string>

class Book {
private:
    int id;
    std::string title;
    std::string author;
    bool isIssued;

public:
    
    Book(int bookId, std::string bookTitle, std::string bookAuthor) {
        id = bookId;
        title = bookTitle;
        author = bookAuthor;
        isIssued = false;
    }

   
    int getId() const { return id; }
    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    bool getIssuedStatus() const { return isIssued; }

    
    void issueBook() { isIssued = true; }
    void returnBook() { isIssued = false; }

   
    void displayBook() const {
        std::cout << "ID: " << id 
                  << " | Title: " << title 
                  << " | Author: " << author 
                  << " | Status: " << (isIssued ? "Issued" : "Available") 
                  << std::endl;
    }
};

class Library {
private:
    std::vector<Book> books;

public:
   
    void addBook() {
        int id;
        std::string title, author;

        std::cout << "\nEnter Book ID (Integer): ";
        std::cin >> id;
        std::cin.ignore(); 

        std::cout << "Enter Book Title: ";
        std::getline(std::cin, title);

        std::cout << "Enter Author Name: ";
        std::getline(std::cin, author);

       
        for (const auto& book : books) {
            if (book.getId() == id) {
                std::cout << "Error: A book with this ID already exists!\n";
                return;
            }
        }

        books.push_back(Book(id, title, author));
        std::cout << "Book successfully added to library!\n";
    }

   
    void viewBooks() const {
        if (books.empty()) {
            std::cout << "\nThe library inventory is empty.\n";
            return;
        }
        std::cout << "\n--- Library Inventory ---\n";
        for (const auto& book : books) {
            book.displayBook();
        }
    }

   
    void searchBook() const {
        if (books.empty()) {
            std::cout << "\nThe library inventory is empty.\n";
            return;
        }
        std::cin.ignore();
        std::string searchTitle;
        std::cout << "\nEnter the Title of the book to search: ";
        std::getline(std::cin, searchTitle);

        bool found = false;
        for (const auto& book : books) {
            if (book.getTitle() == searchTitle) {
                book.displayBook();
                found = true;
            }
        }
        if (!found) {
            std::cout << "No book found matching that title.\n";
        }
    }

   
    void issueBook() {
        int id;
        std::cout << "\nEnter Book ID to Issue: ";
        std::cin >> id;

        for (auto& book : books) {
            if (book.getId() == id) {
                if (book.getIssuedStatus()) {
                    std::cout << "This book is already issued to someone else.\n";
                } else {
                    book.issueBook();
                    std::cout << "Book successfully issued!\n";
                }
                return;
            }
        }
        std::cout << "Book with ID " << id << " not found.\n";
    }

    
    void returnBook() {
        int id;
        std::cout << "\nEnter Book ID to Return: ";
        std::cin >> id;

        for (auto& book : books) {
            if (book.getId() == id) {
                if (!book.getIssuedStatus()) {
                    std::cout << "This book was not issued. It is already in the library.\n";
                } else {
                    book.returnBook();
                    std::cout << "Book successfully returned!\n";
                }
                return;
            }
        }
        std::cout << "Book with ID " << id << " not found.\n";
    }
};

int main() {
    Library myLibrary;
    int choice;

    while (true) {
        std::cout << "\n===============================";
        std::cout << "\n   LIBRARY MANAGEMENT SYSTEM   ";
        std::cout << "\n===============================";
        std::cout << "\n1. Add Book";
        std::cout << "\n2. View All Books";
        std::cout << "\n3. Search Book";
        std::cout << "\n4. Issue Book";
        std::cout << "\n5. Return Book";
        std::cout << "\n6. Exit";
        std::cout << "\nEnter your choice (1-6): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                myLibrary.addBook();
                break;
            case 2:
                myLibrary.viewBooks();
                break;
            case 3:
                myLibrary.searchBook();
                break;
            case 4:
                myLibrary.issueBook();
                break;
            case 5:
                myLibrary.returnBook();
                break;
            case 6:
                std::cout << "\nThank you for using the Library Management System. Goodbye!\n";
                return 0;
            default:
                std::cout << "\nInvalid choice! Please choose an option between 1 and 6.\n";
        }
    }
    return 0;
}
